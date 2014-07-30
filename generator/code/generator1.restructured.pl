use Verilog::Netlist;
use Verilog::Getopt;

# Environment Variables passed to the script
$template_file_name = $ENV{'PROTOCOL_GEN_FILENAME'};
$output_directory = $ENV{'SID_MODEL_OUTPUT_DIR'};
$log_directory = $ENV{'LOG_DIR'};
$temporary_directory = $ENV{'TEMP_DIR'};
$includes_directory = $ENV{'INCLUDES_DIR'};

# Log file
$ipi_log_file = $log_directory."/ipi_gen_mod.log";

# Path for include files
$path = $includes_directory."/";

#unless (-d $temporary_directory)
#{
#	system("mkdir -p $temporary_directory");
#}

unless(open(ipi_log, ">$ipi_log_file"))
{
	print "\nError: Unable to open system log file\n.";
	exit(1);
}

use Math::BigRat;

%hex_values = ('0'=>'', '1'=>'', '2'=>'', '3'=>'', '4'=>'', '5'=>'', '6'=>'', '7'=>'', '8'=>'', '9'=>'', 'a'=>'', 'b'=>'', 'c'=>'', 'd'=>'', 'e'=>'', 'f'=>'');

%task_found = ();

sub is_hex
{
	$return_value = 1;
	if (substr(@_[0], 0, 2) ne "0x")
	{
		$return_value = 0;
	}
	else
	{
		@digits = split(//, @_[0]);
		$number_of_digits = @digits;
		for ($i=2; $i<$number_of_digits; $i++)
		{
			if (!(exists $hex_values{$digits[$i]}))
			{
				$return_value = 0;
				last;
			}
		}
	}

	return($return_value);
}

sub process_template_line()
{
	if (!(substr($template_line, 0, 2) eq "//"))
	{
		@template_words = split(/\s+/, $template_line);
		$number_of_fields = @template_words;
		if (@template_words[0] eq "path") # path removed from templates, read through env vars
		{
			if ($number_of_fields == 1)
			{
				$path = "";
			}
			else
			{
				$path = @template_words[1]."/";
			}
		}
		elsif (@template_words[0] eq "substitute")
		{
			if (exists $reserved_substitution_keys{(@template_words[1])})
			{
				print "\nError: Substitution key ", @template_words[1], " is reserved. \n";
				exit(1);
			}
			$global_substitutions{(@template_words[1])} = @template_words[2];
		}
		elsif (@template_words[0] eq "task")
		{
			if (!(exists $task_types{@template_words[1]}))
			{
				print "\nError: Unknown task type @template_words[1]. \n";
				exit(1);
			}
			$task_head_file{@template_words[1]} = $path.@template_words[2];
			if ($number_of_fields == 4)
			{
				$task_tail_file{@template_words[1]} = $path.@template_words[3];
			}
		}
		elsif (@template_words[0] eq "default")
		{
			if (!(exists $task_types{@template_words[1]}))
                        {
                                print "\nError: Unknown task type @template_words[1]. \n";
                                exit(1);
                        }
			$task_default_file{@template_words[1]} = $path.@template_words[2];
		}
		elsif (@template_words[0] eq "statement")
		{
			if (!(exists $statement_types{@template_words[1]}))
			{
				print "\nError: Unknown statement type @template_words[1]. \n";
				exit(1);
			}
			$statement_template_file{@template_words[1]} = $path.@template_words[2];
		}
		elsif (@template_words[0] eq "entity")
		{
			if (!(exists $entity_types{@template_words[1]}))
			{
				print "\nError: Unknown entity type @template_words[1]. \n";
				exit(1);
			}
			$entity_file_name = $path.@template_words[2];
			unless(open(entity_file,"<$entity_file_name"))
			{
				print ipi_log "\nError: Could not open file $entity_file_name.\n";
				print "Error: Internal System Error.\n";
				exit(1);
			}
			@entity_lines = <entity_file>;
			@entity_words = split(/\s+/, @entity_lines[0]);
			$entity_format{(@template_words[1])} = @entity_words[0];
			close(entity_file);
		}
		elsif (@template_words[0] eq "endian")
		{
			$endian_template_file = $path.@template_words[1];
		}
		elsif (@template_words[0] eq "unpermitted")
		{
			if (!(exists $unpermitted_label_types{@template_words[1]}))
			{
				print "\nError: Unknown label @template_words[1] for unpermitted template. \n";
				exit(1);
			}
			$unpermitted_template_file{@template_words[1]} = $path.@template_words[2];
		}
		else
		{
			print "\nError: Unknown keyword @template_words[0] in template definition file.\n";
			exit(1);
		}
	}
}

sub print_statement_code()
{
	system("cp $use_file $temporary_directory/tmp2");

	for $item (keys %substitutions)
	{
		system("perl -p -i -e \"s/$item/$substitutions{$item}/g\" $temporary_directory/tmp2");
	}
	for $item (keys %global_substitutions)
	{
		system("perl -p -i -e \"s/$item/$global_substitutions{$item}/g\" $temporary_directory/tmp2");
	}
	system("cat $temporary_directory/tmp2 >> $output_file_name");
}

sub generate_and_keep_at_edge_statement_code()
{
	system("cp $use_file $temporary_directory/tmp3");

	for $item (keys %substitutions)
	{
		system("perl -p -i -e \"s/$item/$substitutions{$item}/g\" $temporary_directory/tmp3");
	}
	for $item (keys %global_substitutions)
	{
		system("perl -p -i -e \"s/$item/$global_substitutions{$item}/g\" $temporary_directory/tmp3");
	}
}

sub transfer_pending_at_edge_statement_code()
{
	system("cat $temporary_directory/tmp3 >> $output_file_name");
}

sub process_line()
{
	if (!(substr($protocol_line, 0, 2) eq "//"))
	{
		@protocol_words = split(/[\s\,()\=]+/, $protocol_line);
		$number_of_fields = @protocol_words;
		if (substr($protocol_words[0], 0, 1) eq "#")
		{
			if ($pending_at_edge_statement)
			{
				transfer_pending_at_edge_statement_code;
				$pending_at_edge_statement = 0;
			}

			$delay = substr($protocol_words[0], 1);
			%substitutions = ();
			$delay -= $delay_to_reduce;
			$delay_to_reduce = 0;
			%substitutions = ("##lead_string##" => $lead_string, "##delay##" => $delay);
			$use_file = $statement_template_file{"delay"};
			print_statement_code;
		}
		elsif (substr($protocol_words[0], 0, 1) eq "@")
		{
			if ($pending_at_edge_statement)
			{
				transfer_pending_at_edge_statement_code;
				$pending_at_edge_statement = 0;
			}

			$edge_type = -1;
			if ($protocol_line =~ m/posedge/)
			{
				$edge_type = "true";
			}
			elsif ($protocol_line =~ m/negedge/)
			{
				$edge_type = "false";
			}
			%substitutions = ();
			%substitutions = ("##lead_string##" => $lead_string, "##edge_type##" => $edge_type);
			$use_file = $statement_template_file{"edge_begin"};
			print_statement_code;
			%substitutions = ();
			%substitutions = ("##lead_string##" => $lead_string);
			$use_file = $statement_template_file{"edge_end"};
			generate_and_keep_at_edge_statement_code;
			$pending_at_edge_statement = 1;
			$delay_to_reduce = 1;
		}
		elsif (substr($protocol_words[0], 0, 4) eq "wait")
		{
			if ($pending_at_edge_statement)
			{
				transfer_pending_at_edge_statement_code;
				$pending_at_edge_statement = 0;
			}

			$first_entity = $entity_format{"signal"};
			$first_entity =~ s/##lead_string##/$lead_string/g;
			$first_entity =~ s/##name##/$protocol_words[1]/g;
			if (!($module->find_net($protocol_words[1])))
			{
				print "\nError: Net $protocol_words[1] not found at line # $line_no.\n";
				exit(1);
			}
			if (exists $parameter_list{$protocol_words[2]})
			{
				$second_entity = $entity_format{"parameter"};
				$second_entity =~ s/##name##/$protocol_words[2]/g;
			}
			elsif ($module->find_net($protocol_words[2]))
			{
				$second_entity = $entity_format{"signal"};
				$second_entity =~ s/##lead_string##/$lead_string/g;
				$second_entity =~ s/##name##/$protocol_words[2]/g;
			}
			else
			{
				$second_entity = $entity_format{"value"};
				$second_entity =~ s/##value##/$protocol_words[2]/g;
				$x = Math::BigRat->new($protocol_words[2]);

				if ((!($x->is_int())) && (!is_hex($protocol_words[2])))
				{
					print "\nError: Signal $protocol_words[2] not found at line # $line_no.\n";
					exit(1);
				}
			}
			%substitutions = ();
			%substitutions = ("##lead_string##" => $lead_string, "##first_entity##" => $first_entity, "##second_entity##" => $second_entity);
			$use_file = $statement_template_file{"wait"};
			print_statement_code;
			$delay_to_reduce = 1;
		}
		elsif (substr($protocol_words[0], 0, 4) eq "task")
		{
			if ($inside_task == 1)
			{
				print "\nError: New task $protocol_words[1] defined inside another task. An endtask statement may be missing.\n";
				exit(1);
			}
			$inside_task = 1;

			if ($registers == -1)
			{
				print "\nError: Number of registers not given before task.\n";
				exit(1);
			}

			if (($protocol_words[1] eq "read") || ($protocol_words[1] eq "write"))
			{
				if (!($module->find_net($protocol_words[2])))
				{
					print "\nError: Signal for bus not found on task line at line # $line_no.\n";
					exit(1);
				}
				$net = $module->find_net($protocol_words[2]);
				$bus_width = $net->width();
				if ($bus_width eq "")
				{
					$bus_width = 1;
				}
				$bus_size = int($bus_width/8);
				if ($bus_size > $max_bus_size)
				{
					print "\nError: Bus size greater than maximum supported size.\n";
					exit(1);
				}
				while (!(exists $bus_sizes{$bus_size}))
				{
					$bus_size ++;
				}
			}
			else
			{
				$bus_size = -1;
			}

			$task_found{$protocol_words[1]} = 1;

			if ($protocol_words[1] eq "read")
			{
				$task_type = "read";
				$lead_string = "module_ptr->";
				%parameter_list = ("addr" => 0, "data" => 1);
				$read_bus_size = $bus_size;

				$command = "cat ".$task_head_file{$task_type}." > $temporary_directory/tmp2";
				system($command);
				for $key (keys %global_substitutions)
				{
					$command = "perl -p -i -e \"s/".$key."/".$global_substitutions{$key}."/g\" $temporary_directory/tmp2";
					system($command);
				}
				system("perl -p -i -e s/##bus_size##/$bus_size/g $temporary_directory/tmp2");
				system("perl -p -i -e s/##registers##/$registers/g $temporary_directory/tmp2");

				system("cat $temporary_directory/tmp2 >> $output_file_name");
			}
			elsif ($protocol_words[1] eq "write")
			{
				$task_type = "write";
				$lead_string = "module_ptr->";
				%parameter_list = ("addr" => 0, "data" => 0);
				$write_bus_size = $bus_size;

				$command = "cat ".$task_head_file{$task_type}." > $temporary_directory/tmp2";
				system($command);
				for $key (keys %global_substitutions)
				{
					$command = "perl -p -i -e \"s/".$key."/".$global_substitutions{$key}."/g\" $temporary_directory/tmp2";
					system($command);
				}
				system("perl -p -i -e s/##bus_size##/$bus_size/g $temporary_directory/tmp2");
				system("perl -p -i -e s/##registers##/$registers/g $temporary_directory/tmp2");

				system("cat $temporary_directory/tmp2 >> $output_file_name");
			}
			elsif ($protocol_words[1] eq "reset")
			{
				$task_type = "reset";
				$lead_string = "";
				%parameter_list = ("val" => 0);

				$command = "cat ".$task_head_file{$task_type}." > $temporary_directory/tmp2";
				system($command);
				for $key (keys %global_substitutions)
				{
					$command = "perl -p -i -e \"s/".$key."/".$global_substitutions{$key}."/g\" $temporary_directory/tmp2";
					system($command);
				}
				system("cat $temporary_directory/tmp2 >> $output_file_name");
			}
			else 
			{
				print "\nError: Task can only be read, write or reset.\n";
				exit(1);
			}

			$pending_at_edge_statement = 0;
			$delay_to_reduce = 1;
		}
		elsif (substr($protocol_words[0], 0, 7) eq "endtask")
		{
			$inside_task = 0;
			if ($pending_at_edge_statement)
			{
				transfer_pending_at_edge_statement_code;
				$pending_at_edge_statement = 0;
			}

			$command = "cat ".$task_tail_file{$task_type}." >> $output_file_name";
			system($command);
			$delay_to_reduce = 0;
		}
		elsif (substr($protocol_words[0], 0, 5) eq "print")
		{
			if ($protocol_words[1] eq "message")
			{
				if ($protocol_line =~ m/"/)
				{
					print "\nError: Please do not give quotes in print mesage line.\n";
					exit(1);
				}
				$message = "";
				$number_of_words = @protocol_words;
				for ($ctr = 2; $ctr < $number_of_words; $ctr ++)
				{
					$message = $message.$protocol_words[$ctr]." ";
				}
				%substitutions = ();
				%substitutions = ("##message##" => $message);
				$use_file = $statement_template_file{"print_message"};
				print_statement_code;
			}
			elsif ($protocol_words[1] eq "signal")
			{
				%substitutions = ();
				%substitutions = ("##name##" => $protocol_words[2], "##lead_string##" => $lead_string);
				$use_file = $statement_template_file{"print_signal"};
				print_statement_code;
				if (!($module->find_net($protocol_words[2])))
				{
					print "\nError: Net $protocol_words[2] not found at line # $line_no.\n";
					exit(1);
				}
			}
			elsif ($protocol_words[1] eq "parameter")
			{
				if (!(exists $parameter_list{$protocol_words[2]}))
				{
					print "\nError: Invalid parameter $protocol_words[2].\n";
					exit(1);
				}
				%substitutions = ();
				%substitutions = ("##name##" => $protocol_words[2]);
				$use_file = $statement_template_file{"print_parameter"};
				print_statement_code;
			}
			elsif ($protocol_words[1] eq "time")
			{
				%substitutions = ();
				$use_file = $statement_template_file{"print_time"};
				print_statement_code;
			}
			else
			{
				print "\nError: Print statement has unknown type. \n";
				exit(1);
			}
		}
		elsif (substr($protocol_words[0], 0, 8) eq "register")
		{
			$registers = $protocol_words[1];
			$x = Math::BigRat->new($registers);
			if (!($x->is_int($registers)) || ($registers < 0))
			{
				print "\nError: Invalid number of registers.\n";
				exit(1);
			}
		}
		elsif ($protocol_line =~ m/==/)
		{
			$first_entity = $entity_format{"signal"};
			$first_entity =~ s/##lead_string##/$lead_string/g;
			$first_entity =~ s/##name##/$protocol_words[1]/g;

			if (!($module->find_net($protocol_words[1])))
			{
				print "\nError: Net $protocol_words[1] not found at line # $line_no.\n";
				exit(1);
			}
			if (exists $parameter_list{$protocol_words[2]})
			{
				$second_entity = $entity_format{"parameter"};
				$second_entity =~ s/##name##/$protocol_words[2]/g;
			}
			elsif ($module->find_net($protocol_words[2]))
			{
				$second_entity = $entity_format{"signal"};
				$second_entity =~ s/##lead_string##/$lead_string/g;
				$second_entity =~ s/##name##/$protocol_words[2]/g;
			}
			else
			{
				$second_entity = $entity_format{"value"};
				$second_entity =~ s/##value##/$protocol_words[2]/g;
				$x = Math::BigRat->new($protocol_words[2]);

				if ((!($x->is_int())) && (!is_hex($protocol_words[2])))
				{
					print "\nError: Signal $protocol_words[2] not found at line # $line_no.\n";
					exit(1);
				}
			}
			%substitutions = ();
			%substitutions = ("##first_entity##" => $first_entity, "##second_entity##" => $second_entity);
			$use_file = $statement_template_file{"assert"};
			print_statement_code;
		}
		elsif ($protocol_line =~ m/=/)
		{
			if ($module->find_net($protocol_words[0]))
			{
				$first_entity = $entity_format{"signal"};
				$first_entity =~ s/##lead_string##/$lead_string/g;
				$first_entity =~ s/##name##/$protocol_words[0]/g;
			}
			elsif (exists $parameter_list{$protocol_words[0]})
			{
				$first_entity = $entity_format{"parameter"};
				$first_entity =~ s/##name##/$protocol_words[0]/g;
				if ($parameter_list{$protocol_words[0]} != 1)
				{
					print "\nError: Assigning a read-only paramater $protocol_words[0].\n";
					exit(1);
				}
			}
			else
			{
				print "\nError: Net $protocol_words[0] not found at line # $line_no.\n";
				exit(1);
			}
			if (exists $parameter_list{$protocol_words[1]})
			{
				$second_entity = $entity_format{"parameter"};
				$second_entity =~ s/##name##/$protocol_words[1]/g;

				if ($protocol_words[1] eq "addr")
				{
					$net = $module->find_net($protocol_words[0]);
					if ($address_bus_size == -1)
					{
            $address_bus_size = $net->width();
					}
					else
					{
						if ($address_bus_size != $net->width())
						{
							print "\nWarning: Address bus size mismatch on ", $module->name();
							# exit(1);
						}
					}
					
				}
			}
			elsif ($module->find_net($protocol_words[1]))
			{
				$second_entity = $entity_format{"signal"};
				$second_entity =~ s/##lead_string##/$lead_string/g;
				$second_entity =~ s/##name##/$protocol_words[1]/g;
			}
			else
			{
				$second_entity = $entity_format{"value"};
				$second_entity =~ s/##value##/$protocol_words[1]/g;
				$x = Math::BigRat->new($protocol_words[1]);

				if ((!($x->is_int())) && (!is_hex($protocol_words[1])))
				{
					print "\nError: Signal $protocol_words[1] not found at line # $line_no.\n";
					exit(1);
				}
			}
			for $item (keys %global_substitutions)
			{
				$first_entity =~ s/$item/$global_substitutions{$item}/g;
				$second_entity =~ s/$item/$global_substitutions{$item}/g;
			}
			%substitutions = ();
			%substitutions = ("##first_entity##" => $first_entity, "##second_entity##" => $second_entity);
			$use_file = $statement_template_file{"assign"};
			print_statement_code;
		}
	}
};

my $opt = new Verilog::Getopt;

$number_of_arguments = @ARGV;

$include_directory_list = 0;

if ($number_of_arguments == 2)
{
	unless(open(file_list,"<$ARGV[0]"))
	{
		print "\nError: Could not open file $ARGV[0].\n";
		exit(1);
	}
	unless(open(protocol_list,"<$ARGV[1]"))
	{
		print "\nError: Could not open file $ARGV[1].\n";
		exit(1);
	}
}
elsif ($number_of_arguments == 3)
{
	unless(open(file_list,"<$ARGV[0]"))
	{
		print "\nError: Could not open file $ARGV[0].\n";
		exit(1);
	}
	unless(open(inc_dir_list,"<$ARGV[1]"))
	{
		print "\nError: Could not open file $ARGV[1].\n";
		exit(1);
	}
	unless(open(protocol_list,"$ARGV[2]"))
	{
		print "\nError: Could not open file $ARGV[2].\n";
		exit(1);
	}
	$include_directory_list = 1;
}
else
{
	print "Usage: perl generator1.restructured.pl <file-list> [<include-directory-list>] <module-protocol-list-file>\n";
	exit(1);
}

if ($include_directory_list)
{
	@lines = <inc_dir_list>;
	foreach $line (@lines)
	{
		@words = split(/\s+/, $line);
		foreach $word (@words)
		{
			$opt->incdir($word);
		}
	}
}

my $nl = new Verilog::Netlist(options => $opt);

@lines = <file_list>;

foreach $line (@lines)
{
	@words = split(/\s+/, $line);
	$nl->read_file(filename => @words[0]);

}

$nl->link();
$nl->lint();
#$nl->exit_if_error();
$nl->exit_if_error(allow=>'warning');

%bus_sizes = ('1'=>"", '2'=>"", '4'=>"", '8'=>"");
$max_bus_size = 8;

# path removed from templates, read through env vars
# $path = "";

%reserved_substitution_keys = ();
$reserved_substitution_keys{"##bus_size##"} = "";
$reserved_substitution_keys{"##base_bus_size##"} = "";
$reserved_substitution_keys{"##read_bus_size##"} = "";
$reserved_substitution_keys{"##write_bus_size##"} = "";
$reserved_substitution_keys{"##registers##"} = "";
$reserved_substitution_keys{"##lead_string##"} = "";
$reserved_substitution_keys{"##first_entity##"} = "";
$reserved_substitution_keys{"##second_entity##"} = "";
$reserved_substitution_keys{"##name##"} = "";
$reserved_substitution_keys{"##value##"} = "";
$reserved_substitution_keys{"##message##"} = "";
$reserved_substitution_keys{"##edge_type##"} = "";
%global_substitutions = ();
%task_head_file = ();
%task_tail_file = ();
%task_default_file = ();
%statement_template_file = ();
%entity_format = ();
%unpermitted_template_file = ();
$endian_template_file = "";
%statement_types = ("assign" => "", "assert" => "", "delay" => "", "edge_begin" => "", "edge_end" => "", "print_message" => "", "print_signal" => "", "print_parameter" => "", "print_time" => "", "wait" => "");
%task_types = ("read" => "", "write" => "", "reset" => "");
%entity_types = ("signal" => "", "parameter" => "", "value" => "");
%unpermitted_label_types = ("read" => "", "write" => "");

@lines = <protocol_list>;
for $line (@lines)
{
	if (!(substr($line, 0, 2) eq "//"))
	{
		@words = split(/\s+/,$line);

		unless($module = $nl->find_module($words[0]))
		{
			print "\nError: Module $words[0] not found at line # $line_no.\n";
			exit(1);
		}

#		$template_file_name = $template_files_directory."/protocol_template_".$words[0].".txt";
		unless(open(template_file,"<$template_file_name"))
		{ 
			print ipi_log "\nError: Protocol template file $template_file_name not found at line # $line_no.\n";
			print "Error: Internal System Error.\n";
			exit(1);
		}

		@template_lines = <template_file>;
		for $template_line (@template_lines)
		{
			process_template_line;
		}

		unless(open(protocol_file,"<$words[1]"))
		{
			print "\nError: Protocol file $words[1] not found at line # $line_no.\n";
			exit(1);
		}

		$output_file_name = "X$words[0]_rw_protocol.cxx";
		if ($output_directory) {
			$output_file_name = $output_directory ."/".$output_file_name;
		}
		system("echo \" \" > $output_file_name");

		@protocol_lines = <protocol_file>;

		$bus_size = -1;
		$registers = -1;
		$address_bus_size = -1;

		$inside_task = 0;
		$delay_to_reduce = 0;

    $line_no = 1;

		for $protocol_line (@protocol_lines)
		{
			process_line();
      $line_no++;
		}

		if ($inside_task == 1)
		{
			print "\nError: Last task incomplete. An endtask statement may be missing. \n";
			exit(1);
		}

		for $task_type (keys %task_types)
		{
			if (!(exists $task_found{$task_type}))
			{
				print "\nWarning: Protocol task $task_type not defined.";
				# exit(1);
			}
		}

if ((exists $task_found{"read"}) && (exists $task_found{"write"}))
{

# Big endian functions

		$command = "cat $endian_template_file > $temporary_directory/tmp2";
		system($command);
		for $key (keys %global_substitutions)
		{
			$command = "perl -p -i -e \"s/".$key."/".$global_substitutions{$key}."/g\" $temporary_directory/tmp2";
			system($command);
		}
		system("perl -p -i -e s/##read_bus_size##/$read_bus_size/g $temporary_directory/tmp2");
		system("perl -p -i -e s/##write_bus_size##/$write_bus_size/g $temporary_directory/tmp2");

		system("cat $temporary_directory/tmp2 >> $output_file_name");


# unpermitted functions

		if (!(exists $unpermitted_template_file{"read"}))
		{
			print "\nError: Unpermitted template not given for read. \n";
			exit(1);
		}
		if (!(exists $unpermitted_template_file{"write"}))
		{
			print "\nError: Unpermitted template not given for write. \n";
			exit(1);
		}

		foreach $size (keys %bus_sizes)
		{
			if ($size != $read_bus_size)
			{
				foreach $endian ("little", "big")
				{

					$key = "read";
					$command = "cat ".$unpermitted_template_file{$key}." > $temporary_directory/tmp2";
					system($command);
					for $key (keys %global_substitutions)
					{
						$command = "perl -p -i -e \"s/".$key."/".$global_substitutions{$key}."/g\" $temporary_directory/tmp2";
						system($command);
					}
					system("perl -p -i -e s/##bus_size##/$size/g $temporary_directory/tmp2");
					system("perl -p -i -e s/##base_bus_size##/$read_bus_size/g $temporary_directory/tmp2");
					system("perl -p -i -e s/##endian##/$endian/g $temporary_directory/tmp2");

					system("cat $temporary_directory/tmp2 >> $output_file_name");

				}
			}
			if ($size != $write_bus_size)
			{
				foreach $endian ("little", "big")
				{

					$key = "write";
					$command = "cat ".$unpermitted_template_file{$key}." > $temporary_directory/tmp2";
					system($command);
					for $key (keys %global_substitutions)
					{
						$command = "perl -p -i -e \"s/".$key."/".$global_substitutions{$key}."/g\" $temporary_directory/tmp2";
						system($command);
					}
					system("perl -p -i -e s/##bus_size##/$size/g $temporary_directory/tmp2");
					system("perl -p -i -e s/##base_bus_size##/$write_bus_size/g $temporary_directory/tmp2");
					system("perl -p -i -e s/##endian##/$endian/g $temporary_directory/tmp2");

					system("cat $temporary_directory/tmp2 >> $output_file_name");
				}
			}
		}

}
else
{

	if (!(exists $task_default_file{"read"}))
	{
		print ipi_log "\nError: Default task file for read not given.\n";
		print "Error: Internal System Error.\n";
		exit(1);
	}
	
	if (!(exists $task_default_file{"write"}))
	{
		print ipi_log "\nError: Default task file for write not given.\n";
		print "Error: Internal System Error.\n";
		exit(1);
	}

	foreach $task_name ("read", "write")
	{
		foreach $endian ("little", "big")
		{
			foreach $size (keys %bus_sizes)
			{
				$command = "cat ".$task_default_file{$task_name}." > $temporary_directory/tmp2";
				system($command);	
				for $key (keys %global_substitutions)
				{
					$command = "perl -p -i -e \"s/".$key."/".$global_substitutions{$key}."/g\" $temporary_directory/tmp2";
					system($command);
				}
				system("perl -p -i -e s/##bus_size##/$size/g $temporary_directory/tmp2");
				system("perl -p -i -e s/##endian##/$endian/g $temporary_directory/tmp2");

				system("cat $temporary_directory/tmp2 >> $output_file_name");
			}
		}
	}
}
if (!(exists $task_found{"reset"}))
{
	if (!(exists $task_default_file{"reset"}))
	{
		print ipi_log "\nError: Default task file for reset not given.\n";
		print "Error: Internal System Error.\n";
		exit(1);
	}
	
	$command = "cat ".$task_default_file{"reset"}." > $temporary_directory/tmp2";
	system($command);
	
	for $key (keys %global_substitutions)
	{
		$command = "perl -p -i -e \"s/".$key."/".$global_substitutions{$key}."/g\" $temporary_directory/tmp2";
		system($command);
	}
	system("cat $temporary_directory/tmp2 >> $output_file_name");
}

		if ($output_directory) {
			$ui_file_name = $output_directory."/UI_".$words[0].".2.txt";
		}
		open(ui_file, ">$ui_file_name");
		if ($write_bus_size > $read_bus_size)
		{
			$max_bus_size = $write_bus_size;
		}
		else
		{
			$max_bus_size = $read_bus_size;
		}
		if ($address_bus_size == -1)
		{
			print "\nWarning: Address bus size not known for $words[0].";
			# exit(1);
		}
		$addressable_range = $registers*$max_bus_size;
		if (($address_bus_size != -1) && ($addressable_range > 2**$address_bus_size))
		{
			print "\nError: Address bus overload error for $words[0].\n";
			exit(1);
		}
		print ui_file "address-range \t $addressable_range\n";
		close(ui_file);

		close(protocol_file);
	}
}

close(protocol_list);

#system("rm $temporary_directory/tmp2 $temporary_directory/tmp3");

close(ipi_log);

exit(0);

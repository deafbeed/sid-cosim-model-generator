use Verilog::Netlist;
use Verilog::Getopt;

# Environment Variables passed to the script
$code_gen_filename = $ENV{'CODE_GEN_FILENAME'};
$output_directory = $ENV{'SID_MODEL_OUTPUT_DIR'};
$log_directory = $ENV{'LOG_DIR'};
$temporary_directory = $ENV{'TEMP_DIR'};
$includes_directory = $ENV{'INCLUDES_DIR'};

# Log file
$ipi_log_file = $log_directory."/ipi_gen_mod.log";

# Path for include files
$path = $includes_directory."/";

unless(open(ipi_log, ">$ipi_log_file"))
{
        print "Error: Unable to open system log file\n.";
        exit(1);
}

use Math::BigRat;

# $INCLUDES_DIRECTORY = "/home/shamik/Work/Tools/Generating_SID_Model/pkg/includes";
# $INCLUDES_DIRECTORY = "/home/ghaza/work/Generating_SID_Model/includes";

######## FUNCTIONS TO DETERMINE WHETHER A WORD CORRESPONDS TO AN INTEGER OR
######## HEX NUMBER

%hex_values = ('0'=>'', '1'=>'', '2'=>'', '3'=>'', '4'=>'', '5'=>'', '6'=>'', '7'=>'', '8'=>'', '9'=>'', 'a'=>'', 'b'=>'', 'c'=>'', 'd'=>'', 'e'=>'', 'f'=>'');

######## SUBROUTINE THAT TAKES ONE PARAMETER WORD AND CHECKS WHETHER IT IS A
######## HEX NUMBER

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

######## SUBROUTINE THAT TAKES ONE PARAMETER WORD AND CHECKS WHETHER IT IS
######## EITHER AN INTEGER OR A HEX NUMBER

sub check_for_value
{
	$candidate = @_[0];
	$x = Math::BigRat->new($candidate);
	if ((!($x->is_int())) && (!is_hex($candidate)))
	{
		print "Error: Signal invalid value in file $words[1] at line $line_number.\n";
		exit(1);
	}

}

######## START OF MAIN PROGRAM
######## CHECKING ARGUMENTS AND OPENING SYSTEM DEFINITION FILES

my $opt = new Verilog::Getopt;

$number_of_arguments = @ARGV;

$include_directory_list = 0;

if ($number_of_arguments == 2)
{
	unless(open(file_list,"<$ARGV[0]"))
	{
		print "Error: Could not open file $ARGV[0].\n";
		exit(1);
	}
	unless(open(definition_list,"<$ARGV[1]"))
	{
		print "Error: Could not open file $ARGV[1].\n";
		exit(1);
	}
}
elsif ($number_of_arguments == 3)
{
	unless(open(file_list,"<$ARGV[0]"))
	{
		print "Error: Could not open file $ARGV[0].\n";
		exit(1);
	}
	unless(open(inc_dir_list,"<$ARGV[1]"))
	{
		print "Error: Could not open file $ARGV[1].\n";
		exit(1);
	}
	unless(open(definition_list,"<$ARGV[2]"))
	{
		print "Error: Could not open file $ARGV[2].\n";
		exit(1);
	}
	$include_directory_list = 1;
}
else
{
	print "Usage: perl generator2.restructured.pl <file-list> [<include-directory-list>] <module-definition-list-file>\n";
	exit(1);
}

######## ADD ALL INCLUDE DIRECTORIES TO THE OPTIONS DATA STRUCTURE FOR 
######## VERILOG-PERL

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

######## VERILOG-PERL: READING DESIGN INTO VERILOG-PERL DATA STRUCTURES	

my $nl = new Verilog::Netlist(options => $opt);

@lines = <file_list>;

%module_file_hash = ();
foreach $line (@lines)
{
	@words = split(/\s+/, $line);
	$nl->read_file(filename => @words[0]);

	for $module ($nl->modules())
	{
		if (!(exists $module_file_hash{$module->name()}))
		{
			@parts1 = split(/\./, @words[0]);
			@parts2 = split(/\//, @parts1[0]);
			$number_of_parts = @parts2;
			$module_file_hash{$module->name()} = @parts2[($number_of_parts-1)];
		}
	}

}

$nl->link();
$nl->lint();
#$nl->exit_if_error();
$nl->exit_if_error(allow=>'warning');

######## LOOP THROUGH DEFINED MODULES AND READ THEIR DEFINITION FILES

@lines = <definition_list>;
for $line (@lines)
{
	if (!(substr($line, 0, 2) eq "//"))
	{
		@words = split(/\s+/,$line);

		$number_of_fields = @words;
		if ($number_of_fields == 0)
		{
			next;
		}

		unless($module = $nl->find_module($words[0]))
		{
			print "Error: Module $words[0] not found.\n";
			exit(1);
		}

		unless(open(definition_file,"<$words[1]")) 
		{
			print "Error: Definition file $words[1] not found.\n";
			exit(1);
		}

		@definition_lines = <definition_file>;

		@main_clock = ();
		@clocks = ();
		@inputs = ();
		@outputs = ();
		@reset = ();
		%input_widths = ();
		%initial_values = ();
		%frequency = ();
		$vcd_time = -1;

		$line_number = 1;

######## LOOP TO PARSE LINE IN MODULE DEFINITION FILE
######## STATEMENT TYPES INCLUDE: CLOCK, BUS-CLOCK, INPUT PORT, OUTPUT PORT, 
######## RESET, INITIAL

		for $definition_line (@definition_lines)
		{

			if (!(substr($definition_line, 0, 2) eq "//"))
			{

				@definition_words = split(/[\s=]+/, $definition_line);

######## FIRST CHECK THAT THE SECOND FIELD IS A VALID SIGNAL (PORT) ON THE
######## MODULE

				$number_of_fields = @definition_words;
				if ($number_of_fields == 0)
				{
					$line_number ++;
					next;
				}
				elsif ($number_of_fields < 2)
				{
					print "Error: Malformed line in $words[1] at line $line_number.\n";
					exit(1);
				}

				if ($definition_words[0] ne "vcd")
				{
				if (!($port = $module->find_port($definition_words[1])))
				{
					print "Error: Signal $definition_words[1] not found in file $words[1] at line $line_number. \n";
					exit(1);
				}
				}

######## PARSING FOR CLOCK
				if (($definition_words[0] eq "clock") || ($definition_words[0] eq "c"))
				{
					if (($port->direction() eq "out") || ($port->direction() eq "inout"))
					{
						print "Error: Output port defined as clock in file $words[1] at line $line_number.\n";
						exit(1);
					}
					if (($port->net()->width() != 1) && ($port->net()->width() != ""))
					{
						print "Error: Clock is wider than one bit in file $words[1] at line $line_number.\n";
						exit(1);
					}
					if ($number_of_fields < 3)
					{
						$freq = 1;
					}
					elsif ($number_of_fields == 3)
					{
						$freq = $definition_words[2];
					}
					else
					{
						$freq = $definition_words[2];
						check_for_value($definition_words[3]);
						$initial_values{$definition_words[1]} = $definition_words[3];
					}
					push(@clocks, $definition_words[1]);
					$frequency{$definition_words[1]} = $freq;
				}
######## PARSING FOR BUS-CLOCK
				elsif (($definition_words[0] eq "bus-clock") || ($definition_words[0] eq "bc")) 
				{
					if (($port->net()->width() != 1) && ($port->net()->width() != ""))
					{
						print "Error: Clock is wider than one bit in file $words[1] at line $line_number.\n";
						exit(1);
					}
					if ($port->direction() eq "out")
					{
						print "Error: Output port defined as clock in file $words[1] at line $line_number.\n";
						exit(1);
					}
					$number_of_fields = @definition_words;
					if ($number_of_fields < 3)
					{
						$freq = 1;
					}
					elsif ($number_of_fields == 3)
					{
						$freq = $definition_words[2];
					}
					else
					{
						$freq = $definition_words[2];
						check_for_value($definition_words[3]);
						$initial_values{$definition_words[1]} = $definition_words[3];
					}
					push(@main_clock, $definition_words[1]);
					$frequency{$definition_words[1]} = $freq;
				}
######## PARSING FOR INPUT
				elsif (($definition_words[0] eq "input") || ($definition_words[0] eq "in"))
				{
					if (!($port->direction() eq "in"))
					{
						print "Error: Input port defined is not an input port in file $words[1] at line $line_number.\n";
					}
					push (@inputs, $definition_words[1]);
					$width = $port->net()->width();
					if ($width eq "")
					{
						$width = 1;
					}
					$input_widths{$definition_words[1]} = $width;
					if ($number_of_fields > 2)
					{
						check_for_value($definition_words[2]);
						$initial_values{$definition_words[1]} = $definition_words[2];
					}
				}
######## PARSING FOR OUTPUT
				elsif (($definition_words[0] eq "output") || ($definition_words[0] eq "out"))
				{
					if (!($port->direction() eq "out"))
					{
						print "Error: Output port defined is not an output port in file $words[1] at line $line_number.\n";
						exit(1);
					}
					push(@outputs, $definition_words[1]);
					if ($number_of_fields > 2)
					{
						check_for_value($definition_words[2]);
						$initial_values{$definition_words[1]} = $definition_words[2];
					}
				}
######## PARSING FOR INITIAL
				elsif (($definition_words[0] eq "initial") || ($definition_words[0] eq "i"))
				{
					check_for_value($definition_words[2]);
					$initial_values{$definition_words[1]} = $definition_words[2];
				}
######## PARSING FOR RESET
				elsif (($definition_words[0] eq "reset") || ($definition_words[0] eq "r"))
				{
					push(@reset, $definition_words[1]);
					if ($number_of_fields > 2)
					{
						check_for_value($definition_words[2]);
						$initial_values{$definition_words[1]} = $definition_words[2];
					}
				}
				elsif ($definition_words[0] eq "vcd")
				{
					check_for_value($definition_words[1]);
					$vcd_time = $definition_words[1];
				}
				else 
				{
					print "Error: Unknown keyword $definition_words[0] in file $words[1] at line $line_number. \n";
					exit(1);
				}

				$line_number ++;

			}
		}

######## ADDITIONAL CHECKS:
######## CHECK THAT BUS-CLOCK DEFINED AND ATMOST ONE RESET

		$number_of_bus_clocks = @main_clock;
		if ($number_of_bus_clocks < 1)
		{
			print "Warning: No bus clock specified in file $words[1]. \n";
			# exit(1);
		}
		elsif ($number_of_bus_clocks > 1)
		{
			print "Error: Multiple bus clocks specified in file $words[1]. \n";
			exit(1);
		}

		$number_of_resets = @reset;
		if ($number_of_resets > 1)
		{
			print "Warning: Multiple resets specified in file $words[1]. \n";
			# exit(1);
		}

######## CODE GENERATOR

#		$code_gen_filename = $template_files_directory."/code_gen_".$module->name().".txt";
		unless(open(code_gen_file,"<$code_gen_filename"))
		{
			print ipi_log "Error Code generator file $code_gen_filename not found.\n"; 
			print "System Error: Details in ipi log file.\n";
			exit(1);
		}

######## CREATE ARRAYS FOR MODULE INPORTS AND OUTPORTS SO THAT THEY
######## CAN BE HANDLED IN THE SAME WAY AS THE OTHER SIGNAL TYPES

		@inports = ();
		@outports = ();

		for $port ($module->ports())
		{
			if ($port->direction eq "in")
			{
				push(@inports, $port->name());
			}
			elsif ($port->direction eq "out")
			{
				push(@outports, $port->name());
			}
		}

		%reserved_substitution_keys = ();
		$reserved_substitution_keys{"##name##"} = "";
		$reserved_substitution_keys{"##initial##"} = "";
		$reserved_substitution_keys{"##width##"} = "";
		$reserved_substitution_keys{"##frequency##"} = "";
		$reserved_substitution_keys{"##VCD_TIME##"} = "";

# path removed from templates, read through env vars
#		$path = "";

		%files_touched = ();
		@code_gen_lines = <code_gen_file>;
		%global_substitutions = ();
		for $code_gen_line (@code_gen_lines)
		{
			@code_gen_words = split(/[\s,()]+/, $code_gen_line);
			$number_of_fields = @code_gen_words;
			if (@code_gen_words[0] eq "fixed")
			{
				if ($output_directory) {
					@code_gen_words[1] = $output_directory ."/".@code_gen_words[1];
				}
				$command = "cp ".$path.@code_gen_words[2]." $temporary_directory/tmp1";
				system($command);
				for ($i=3; $i<($number_of_fields-1); $i+=2)
				{
					if (exists $reserved_substitution_keys{(@code_gen_words[$i])})
					{
						print "Error: Substitution key ", @code_gen_words[$i], " is reserved. \n";
						exit(1);
					}
					$command = "perl -p -i -e \"s/".@code_gen_words[$i]."/".@code_gen_words[$i+1]."/g\" $temporary_directory/tmp1";
					system($command);
				}
				for $key (keys %global_substitutions)
				{
					$command = "perl -p -i -e \"s/".$key."/".$global_substitutions{$key}."/g\" $temporary_directory/tmp1";
					system($command);
				}
				system("perl -p -i -e \"s/##VCD_TIME##/$vcd_time/g\" $temporary_directory/tmp1");
				if (exists $files_touched{@code_gen_words[1]})
				{
					system ("cat $temporary_directory/tmp1 >> @code_gen_words[1]");
				}
				else
				{
					system ("mv $temporary_directory/tmp1 @code_gen_words[1]");
					$files_touched{(@code_gen_words[1])} = 1;
				}
			}
			elsif (@code_gen_words[0] eq "loop")
			{
				if ($output_directory) {
					@code_gen_words[1] = $output_directory ."/".@code_gen_words[1];
				}
				open(outfile, ">$temporary_directory/tmp1");

				if (@code_gen_words[3] eq "input")
				{
					$reference = \@inputs;
				}
				elsif (@code_gen_words[3] eq "output")
				{
					$reference = \@outputs;
				}
				elsif (@code_gen_words[3] eq "clock")
				{
					$reference = \@clocks;
				}
				elsif (@code_gen_words[3] eq "bus-clock")
				{
					$reference = \@main_clock;
				}
				elsif (@code_gen_words[3] eq "reset")
				{
					$reference = \@reset;
				}
				elsif (@code_gen_words[3] eq "inports")
				{
					$reference = \@inports;
				}
				elsif (@code_gen_words[3] eq "outports")
				{
					$reference = \@outports;
				}
				else
				{
					print "Error: Unknown type @code_gen_words[3] in code generation file.\n";
					exit(1);
				}

				$infile_name = $path.@code_gen_words[2];
				unless(open(infile, $infile_name))
				{
					print ipi_log "Error: Could not open file $infile_name.\n";
					print "System Error: Details in ipi log file.\n";
					exit(1);
				}
				@code_lines = <infile>;
				for $item (@$reference)
				{
					for $code_line (@code_lines)
					{
						$new_line = $code_line;
						$new_line =~ s/##name##/$item/g;
						if (exists $initial_values{$item})
						{
							$initial = $initial_values{$item};
						}
						else
						{
							$initial = 0;
						}
						$new_line =~ s/##initial##/$initial/g;
						if (@code_gen_words[3] eq "input")
						{
							$width = $input_widths{$item};
							$new_line =~ s/##width##/$width/g;
						}
						if ((@code_gen_words[3] eq "clock") || (@code_gen_words[3] eq "bus-clock"))
						{
							$freq = $frequency{$item};
							$new_line =~ s/##frequency##/$freq/g;
						}
						print outfile $new_line;
					}
				}
				for ($i=4; $i<($number_of_fields-1); $i+=2)
				{
					if (exists $reserved_substitution_keys{(@code_gen_words[$i])})
					{
						print "Error: Substitution key ", @code_gen_words[$i], " is reserved. \n";
						exit(1);
					}
					$command = "perl -p -i -e \"s/".@code_gen_words[$i]."/".@code_gen_words[$i+1]."/g\" $temporary_directory/tmp1";
					system($command);
				}

				for $key (keys %global_substitutions)
				{
					$command = "perl -p -i -e \"s/".$key."/".$global_substitutions{$key}."/g\" $temporary_directory/tmp1";
					system($command);
				}

				if (exists $files_touched{@code_gen_words[1]})
				{
					system ("cat $temporary_directory/tmp1 >> @code_gen_words[1]");
				}
				else
				{
					system ("mv $temporary_directory/tmp1 @code_gen_words[1]");
					$files_touched{(@code_gen_words[1])} = 1;
				}
			}
			elsif (@code_gen_words[0] eq "path") # path removed from templates, read through env vars
			{
				if ($number_of_fields == 1)
				{
					$path = "";
				}
				else
				{
					$path = @code_gen_words[1]."/";
				}
			}
			elsif (@code_gen_words[0] eq "substitute")
			{
				if ($number_of_fields == 2)
				{
					delete($global_substitutions{(@code_gen_words[1])});
				}
				elsif ($number_of_fields == 3)
				{
					if (exists $reserved_substitution_keys{(@code_gen_words[1])})
					{
						print "Error: Substitution key ", @code_gen_words[1], " is reserved. \n";
						exit(1);
					}
					$global_substitutions{(@code_gen_words[1])} = @code_gen_words[2];
				}
				else
				{
					print "Warning: Extra fields on substitute line.\n";
				}
			}
			else
			{
				print "Error: Unknown keyword @code_gen_words[0] in code generation file.\n";
				exit(1);
			}
		}

	}
}

close(definition_list);

#system("rm $temporary_directory/tmp1");

exit(0);

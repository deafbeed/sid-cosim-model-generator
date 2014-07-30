use Verilog::Netlist;
use Verilog::Getopt;

my $opt = new Verilog::Getopt;

$number_of_arguments = @ARGV;

$include_directory_list = 0;

if ($number_of_arguments == 1)
{
        unless(open(file_list,"<$ARGV[0]"))
	{
		print "Error: Could not open file $ARGV[0].\n";
		exit(1);
	}
}
elsif ($number_of_arguments == 2)
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
        $include_directory_list = 1;
}
else
{
        print "Usage: perl get_top_modules.pl <file-list> [<include-directory-list>] \n";
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

%module_file_hash = ();
foreach $line (@lines)
{
        @words = split(/\s+/, $line);
        $nl->read_file(filename => @words[0]);

        for $module ($nl->modules())
        {
                if (!(exists $module_file_hash{$module->name()}))
                {
                        $module_file_hash{$module->name()} = @words[0];
                }
        }
}

$nl->link();
$nl->lint();
#$nl->exit_if_error();
$nl->exit_if_error(allow=>'warning');

close(file_list);
if ($include_directory_list)
{
close(inc_dir_list);
}

#open(top_module_list_file, ">top_module_list.txt");
for $module ($nl->top_modules_sorted())
{
# Print to stdout (Used in a shell script)
print $module->name(), "\t", $module_file_hash{$module->name()}, "\n";
#print top_module_list_file $module->name(), "\t", $module_file_hash{$module->name()}, "\n";
}
#close(top_module_list_file);


exit(0);

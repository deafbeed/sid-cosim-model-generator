#!/bin/bash
#
# Usage: design_flow_wrapper.sh -f <file list> -d <dir list> -m <module-definition> -p <module-bus-protocol>
#
#

# FUNCTION : Waits for user key press.
Pause()
{
	OLDCONFIG=`stty -g`
	stty -icanon -echo min 1 time 0
	dd count=1 2>/dev/null
	stty $OLDCONFIG
}

# FUNCTION: Print Usage and Exit
Print_Usage()
{
	echo "Usage: $0 -f <filelist> -d <Include directory list> -m <module-definition-file> -p <module-bus-protocol-file>"
	echo "Options: Options can be specified in any order."
	echo "		-f <filelist> : List of all verilog files with abosolute path."
	echo "		-d <Include directory list> : List of all directories containing the verilog files."
	echo "		-m <module-definition-file> : File specifying module signal definitions."
	echo "		-p <module-bus-protocol-file> : File specifying module bus protocol."
#	echo "		-x : Pause after every step."
	exit 1
}
# FUNCTION: Cleanup temporary files
CleanUp()
{
	echo
	rm -rf $TEMP_DIR >/dev/null 2>&1
	# Kill the spawned processes if not yet completed
	if [ -f /tmp/$LPID.lock ]; then
		kill -s SIGKILL $LPID
		rm -rf /tmp/$LPID.lock
	fi
	if [ -f /tmp/$LPID.stat ]; then
		rm -rf /tmp/$LPID.stat
	fi
}

# FUNCTION: Check Error, Display error msg and exit
DispErr()
{
	if [ $? -ne 0 ]; then
		$ECHONL "\nError: ${STATMSG}"
		STATMSG= #Reset Status Msg
		rm -rf $SID_GEN_DIR
		exit 1;
	fi
}

# FUNCTION: Check Error, Display generic error msg and exit
NoDispErr()
{
	if [ $? -ne 0 ]; then
		$ECHONL "\nError occurred exiting...\n"
		rm -rf $SID_GEN_DIR
		exit 1;
	fi
}

# FUNCTION: Returns a random number
GenRand()
{
	LRAND=$(dd if=/dev/urandom count=1 2> /dev/null | cksum | cut -f1 -d" ")
	if [ $? -ne 0 ]; then
		return -1
	else
		return 0
	fi
}

###############################################
# Defines: Change to port elsewhere
###############################################
SCRIPT_WHICH=`which $0`
SCRIPT_BASEDIR=`dirname $SCRIPT_WHICH`
. $SCRIPT_BASEDIR/design_flow_wrapper_env

# Root Directories
#SID_ROOT=/home/ghaza/work/SID/
#VERILATOR_ROOT=/home/ghaza/work/Tools_Downloaded/verilator/verilator-3.800/
#SYSTEMPERL=/home/ghaza/work/Tools_Downloaded/system-perl/SystemPerl-1.334/
#TOOL_DIR=/home/ghaza/work/Tools_Downloaded/bin
# Directory which contains Generator generic files
#SID_GEN_TEMPLATE_DIR=/home/ghaza/work/Generating_SID_Model/templates

# Build & Generate Scripts (Should be placed under $TOOL_DIR in appropriate dirs)
SID_BUILD_SCR=$TOOL_DIR/templates/build_install_module_name.sh
TOP_MOD_SCR=$TOOL_DIR/code/get_top_modules.pl
SID_GEN_TEMPLATE_DIR=$TOOL_DIR/templates
SID_GEN_DEF_TEMPLATE=$SID_GEN_TEMPLATE_DIR/code_gen_GENERIC.txt
SID_GEN_PROTO_TEMPLATE=$SID_GEN_TEMPLATE_DIR/protocol_template_GENERIC.txt
SID_GEN_DEF_PREFIX=code_gen_
SID_GEN_PROTO_PREFIX=protocol_template_
SID_CONF_TEMPLATE=$SID_GEN_TEMPLATE_DIR/hdl_sid_conf.conf
SID_CONF_BASE=$SID_GEN_TEMPLATE_DIR/sid.conf.base

# Bridge Generation perl scripts
SID_MOD_GEN_SCR=$TOOL_DIR/code/generate_module.pl
SID_PROTO_GEN_SCR=$TOOL_DIR/code/generate_proto.pl

# Defines for Bridge Generation perl script
LOG_DIR=$TOOL_DIR/logs
INCLUDES_DIR=$TOOL_DIR/includes

# Local Variables
CURR_DIR=$(pwd)
TOP_MOD_FILE=top_module_list.txt # File where top module info will be dumped by generator
SID_GEN_DIR=cosim_model # Directory which will contain the sid model files

# Local cmd paths
PERL=$(which perl)
BASH=$(which bash)
ECHO=$(which echo)
ECHONL="$ECHO -e"
ECHONONL="$ECHO -en"

# Verilated or SpTrace class for Tracing
if [ $SPTRACE ] && [ $VTRACE ]; then
	$ECHONL "Internal Error: Both SystemPerl and Verilator tracing cannot be turned on. One and only one should be defined.\n"
	exit 1
elif [ ! $SPTRACE ] && [ ! $VTRACE ]; then
	$ECHONL "Internal Error: Both SystemPerl and Verilator tracing cannot be turned off. One and only one should be defined.\n"
	exit 1
fi 

################################
# Script Starts
################################

# Define Signal traps
trap 'CleanUp' 0
trap 'exit 1' 1 2 3 13 15

# Argument checking (8 or 9)
if [ $# -ne 8 ]; then
	if [ $# -ne 9 ]; then
			Print_Usage
	fi
fi

# Read other options
while getopts "f:d:m:p:x" opt
do
	case $opt in
  	f ) MOD_FILELIST="${OPTARG}";;
		d ) MOD_DIRLIST="${OPTARG}";;
		m ) MOD_DEFFILE="${OPTARG}";;
		p ) MOD_PROTOFILE="${OPTARG}";;
		x ) PAUSE=1;;
		\? ) Print_Usage;;
  esac
done

# Change all paths to absolute
# Check for file list
if [ ! $MOD_FILELIST ]; then
	echo "Error: Verilog File list not specified."
	Print_Usage
fi
if [ ! -f $MOD_FILELIST ]; then
	echo "Error: File List file ${MOD_FILELIST} does not exist."
	Print_Usage
fi

# Check for dir list
if [ ! $MOD_DIRLIST ]; then
	echo "Error: Verilog Directory list not specified."
	Print_Usage
fi
if [ ! -f $MOD_DIRLIST ]; then
	echo "Error: Directory list file ${MOD_DIRLIST} does not exist."
	Print_Usage
fi

# Check for module definition file
if [ ! $MOD_DEFFILE ]; then
	echo "Error: Module Definitions File not specified."
	Print_Usage
fi
if [ ! -f $MOD_DEFFILE ]; then
	echo "Error: Module Definitions file ${MOD_DEFFILE} does not exist."
	Print_Usage
fi

# Check for protocol definition file
if [ ! $MOD_PROTOFILE ]; then
	echo "Error: Module Bus Protocol Definitions File not specified."
	Print_Usage
fi
if [ ! -f $MOD_PROTOFILE ]; then
	echo "Error: Module Bus Protocol file ${MOD_PROTOFILE} does not exist."
	Print_Usage
fi

# Check for existence of files in filelist
while read inputline
do
# Resolve paths here if starts with a /HOME/ or /PROJECTS/
	if [ ! -f $inputline ]; then
		echo "Error: File ${inputline} read from $MOD_FILELIST does not exist."
		Print_Usage
	fi
done < $MOD_FILELIST

# Read in include dirs and check existence
while read inputline
do
	if [ ! -d $inputline ]; then
		echo "Error: Directory ${inputline} read from $MOD_DIRLIST does not exist."
		Print_Usage
	else
		INCLUDE_DIRS="$INCLUDE_DIRS -I`echo $inputline`"
	fi
done < $MOD_DIRLIST

# Create a temp dir (Cleanup at the end or on a trap)
GenRand # Generate a random number
NoDispErr # Exit if error in random number generation
TEMP_DIR=$CURR_DIR/.$LRAND # Random name
STATMSG="Could not create directory in ${CURR_DIR}." # Used for msg display
# Create the dir and perm is 700
(umask 077 && mkdir $TEMP_DIR) >/dev/null 2>&1 || DispErr

# Differentiate absolute vs relative paths
# Resolve paths for filenames and directories
MOD_FILELIST=$CURR_DIR/$MOD_FILELIST
MOD_DIRLIST=$CURR_DIR/$MOD_DIRLIST
MOD_DEFFILE=$CURR_DIR/$MOD_DEFFILE
MOD_PROTOFILE=$CURR_DIR/$MOD_PROTOFILE

# Resolve top level module
#$ECHONONL "\nResolving top level verilog file....\n\n"
$ECHONL "\nProduces a HW-SW Co-Simulation model from Verilog RTL and Bridge Configuration files.\n"

# Run the top module script amd move TOP_MOD_FILE to TEMP_DIR
GenRand # Generate a random number
NoDispErr # Exit if error in random number generatio
TOP_MOD_FILE=$TEMP_DIR/.$LRAND # Random name

STATMSG="Encountered problems while resolving top verilog module."
$PERL $TOP_MOD_SCR $MOD_FILELIST $MOD_DIRLIST 1>${TOP_MOD_FILE}
#echo "$PERL $TOP_MOD_SCR $MOD_FILELIST $MOD_DIRLIST 1>${TOP_MOD_FILE}"
DispErr

# Read in the top module. Throw error if more than one top module.
while read inputline
do
	if [ ! $MOD_NAME ] && [ ! $TOP_MOD_FILENAME ]; then
		MOD_NAME=`echo $inputline | cut -d " " -f1`
		TOP_MOD_FILENAME=`echo $inputline | cut -d " " -f2`
	else 
		$ECHONL "Error: More than one top module not supported. Ensure the design has only one top module and rerun this script."
		exit 1;
	fi
done < $TOP_MOD_FILE

# Check MOD_NAME
if [ ! $MOD_NAME ]; then
	echo "Error: Top level verilog module could not be resolved."
	Print_Usage
fi
# Check Top verilog file
if [ ! $TOP_MOD_FILENAME ]; then
	echo "Error: Top level verilog file could not be resolved."
	Print_Usage
fi
if [ ! -f $TOP_MOD_FILENAME ]; then
	echo "Error: Resolved top module verilog file $TOP_MOD_FILENAME does not exist."
	Print_Usage
fi

# Populate Module Defines
MOD_FILENAME=`basename $TOP_MOD_FILENAME`
MOD_DIR=`dirname $TOP_MOD_FILENAME`
TOP_FILENAME=`echo $MOD_FILENAME | cut -d "." -f1` # Check that the file has an extension

# Create if SID generation DIR not present
SID_GEN_DIR=$CURR_DIR/${MOD_NAME}_${SID_GEN_DIR}
if [ ! -d $SID_GEN_DIR ]; then
	STATMSG="Could not create directory in ${CURR_DIR} to place generated files." 
	mkdir $SID_GEN_DIR >/dev/null
	DispErr
fi
# Create sid src, conf & build dirs
if [ ! -d $SID_GEN_DIR/src ]; then
	STATMSG="Could not create directory in ${CURR_DIR} to place generated files." 
	mkdir $SID_GEN_DIR/src >/dev/null 2>&1
	DispErr
fi
if [ ! -d $SID_GEN_DIR/conf ]; then
	STATMSG="Could not create directory in ${CURR_DIR} to place generated files." 
	mkdir $SID_GEN_DIR/conf >/dev/null 2>&1
	DispErr
fi
if [ ! -d $SID_GEN_DIR/build ]; then
	STATMSG="Could not create directory in ${CURR_DIR} to place generated files." 
	mkdir $SID_GEN_DIR/build >/dev/null 2>&1
	DispErr
fi
# Check and create .libs .deps & .md5sum dirs
if [ ! -d $SID_GEN_DIR/build/.libs ]; then
	STATMSG="Could not create directory in ${CURR_DIR} to place generated files." 
	mkdir $SID_GEN_DIR/build/.libs >/dev/null 2>&1
	DispErr	
fi
if [ ! -d $SID_GEN_DIR/build/.deps ]; then
	STATMSG="Could not create directory in ${CURR_DIR} to place generated files." 
	mkdir $SID_GEN_DIR/build/.deps >/dev/null 2>&1
	DispErr
fi
if [ ! -d $SID_GEN_DIR/build/.md5sum ]; then
	STATMSG="Could not create directory in ${CURR_DIR} to place generated files." 
	mkdir $SID_GEN_DIR/build/.md5sum >/dev/null 2>&1
	DispErr
fi
if [ ! -f $SID_GEN_DIR/build/build_install_${MOD_NAME}.sh ]; then
	cp ${SID_BUILD_SCR} $SID_GEN_DIR/build/build_install_${MOD_NAME}.sh >/dev/null 2>&1
	NoDispErr
fi	
if [ ! -d $SID_GEN_DIR/install ]; then
	STATMSG="Could not create directory in ${CURR_DIR} to place generated files." 
	mkdir $SID_GEN_DIR/install
	DispErr
fi

# Execution starts
$ECHONL "Verilog Top Module: ${MOD_NAME}"
$ECHONL "Directory: ${MOD_DIR}\n"

if [ ! -z $PAUSE ]; then
	read -p "Press enter to proceed...."
fi

$ECHONL "Translating Verilog RTL Files to C++ Model....\n"

# Set Error msg
STATMSG="Encountered problems while generating C++ model."
# Run verilator set required environment vars (Run as ';' separated cmds)
export VERILATOR_ROOT=$VERILATOR_ROOT;
export SYSTEMPERL=$SYSTEMPERL;
export SYSTEMC=$SYSTEMC;
export SYSTEMC_KIT=$SYSTEMC_KIT;
verilator --cc ${TOP_MOD_FILENAME} ${INCLUDE_DIRS} -Mdir $TEMP_DIR/v_model -O0 --trace
# Check verilator return status
DispErr

# Changing to verilator dir
cd $TEMP_DIR/v_model
# Set Error msg
STATMSG="Encountered problems while generating C++ model."
# Just do perl concatenation
make -f V${TOP_FILENAME}.mk 1>/dev/null 2>/dev/null
# Check make return status
DispErr

# Copy all generated *.h and *.cpp files to SID src dir
STATMSG="Encountered problems while generating C++ model."
cp *.h *.cpp $SID_GEN_DIR/src
DispErr
# Change back to execution dir
cd $CURR_DIR

if [ ! -z $PAUSE ]; then
	echo
	read -p  "Done. Press enter to proceed...."
fi

$ECHONONL "\nGenerating Co-Simulation Bridge files from Design and Protocol description.... "

# Create temporary SID generator module & protocol template files for this design
sed s/%%TOP_MODULE%%/${MOD_NAME}/g < $SID_GEN_DEF_TEMPLATE > $TEMP_DIR/${SID_GEN_DEF_PREFIX}${MOD_NAME}.txt
NoDispErr
sed s/%%TOP_MODULE%%/${MOD_NAME}/g < $SID_GEN_PROTO_TEMPLATE > $TEMP_DIR/${SID_GEN_PROTO_PREFIX}${MOD_NAME}.txt
NoDispErr

# Create Definitions List
MOD_DEFLIST_FILE=$TEMP_DIR/${MOD_NAME}_def_list
echo "$MOD_NAME $MOD_DEFFILE" > $MOD_DEFLIST_FILE
NoDispErr
# Create Protocol List
MOD_PROTOLIST_FILE=$TEMP_DIR/${MOD_NAME}_proto_list
echo "$MOD_NAME $MOD_PROTOFILE" > $MOD_PROTOLIST_FILE
NoDispErr

# Setup Bridge Generation environment (Run a ';' separated cmds)
STATMSG="Encountered problems while generating Co-Simulation Module Wrapper."
export CODE_GEN_FILENAME=$TEMP_DIR/${SID_GEN_DEF_PREFIX}${MOD_NAME}.txt;
export SID_MODEL_OUTPUT_DIR=$SID_GEN_DIR/src;
export TEMP_DIR=$TEMP_DIR;
export LOG_DIR=$LOG_DIR;
export INCLUDES_DIR=$INCLUDES_DIR;
# Generate SID Module Wrapper Code
$PERL $SID_MOD_GEN_SCR $MOD_FILELIST $MOD_DIRLIST $MOD_DEFLIST_FILE
DispErr

STATMSG="Encountered problems while generating Co-Simulation Protocol Wrapper."
export PROTOCOL_GEN_FILENAME=$TEMP_DIR/${SID_GEN_PROTO_PREFIX}${MOD_NAME}.txt;
export SID_MODEL_OUTPUT_DIR=$SID_GEN_DIR/src;
export TEMP_DIR=$TEMP_DIR;
export LOG_DIR=$LOG_DIR;
export INCLUDES_DIR=$INCLUDES_DIR;
# Generate SID Protocol Wrapper Code
$PERL $SID_PROTO_GEN_SCR $MOD_FILELIST $MOD_DIRLIST $MOD_PROTOLIST_FILE
DispErr

# Concatenate protocol file to module implementation file
#cd $SID_GEN_DIR/src;
#cat X${MOD_NAME}_rw_protocol.cxx >> X${MOD_NAME}.cxx;
#NoDispErr
#rm -rf X${MOD_NAME}_rw_protocol.cxx >/dev/null
#NoDispErr

# Link the .cxx and .h file to the SID src dir
#ln -s ${MOD_DIR}/for_SID/X${MOD_NAME}.h ${SID_ROOT}/src/sid/component/${MOD_NAME}/X${MOD_NAME}.h
#ln -s ${MOD_DIR}/for_SID/X${MOD_NAME}.cxx ${SID_ROOT}/src/sid/component/${MOD_NAME}/X${MOD_NAME}.cxx

$ECHONL "Done.\n"
if [ ! -z $PAUSE ]; then
	read -p "Press enter to proceed...." 
fi

$ECHONL "Compiling Generated (Co-Simulation Bridge + C++ HW Model) into a component library....\n"

# Create a temporary environment script
GenRand # Generate a random number
NoDispErr # Exit if error in random number generatio
BUILD_ENV_FILE=$TEMP_DIR/.$LRAND # Random name

echo "SID_ROOT=${SID_ROOT}" > $BUILD_ENV_FILE
NoDispErr
echo "VERILATOR_ROOT=${VERILATOR_ROOT}" >> $BUILD_ENV_FILE
NoDispErr
echo "SYSTEMPERL=${SYSTEMPERL}" >> $BUILD_ENV_FILE
NoDispErr
echo "MOD_NAME=${MOD_NAME}" >> $BUILD_ENV_FILE
NoDispErr
echo "MOD_SRC_DIR=${SID_GEN_DIR}/src" >> $BUILD_ENV_FILE
NoDispErr
echo "MOD_BUILD_DIR=${SID_GEN_DIR}/build" >> $BUILD_ENV_FILE
NoDispErr
echo "MOD_INSTALL_DIR=${SID_GEN_DIR}/install" >> $BUILD_ENV_FILE
NoDispErr
# Trace
if [ $SPTRACE ]; then
	echo "SPTRACE=${SPTRACE}" >> $BUILD_ENV_FILE
	NoDispErr
elif [ $VTRACE ]; then
	echo "VTRACE=${VTRACE}" >> $BUILD_ENV_FILE
	NoDispErr
fi

# Change to build dir
cd $SID_GEN_DIR/build
STATMSG="Encountered problems while Compiling Co-Simulation Model."
# Building SID model
export BUILD_ENV_FILE=$BUILD_ENV_FILE;
$BASH build_install_${MOD_NAME}.sh &
LPID=$!

#$ECHONL "Last ran PID : $LPID"

while [ 1 ]
do
	sleep 1
	if [ ! -f /tmp/$LPID.lock ]; then
		break
	fi
done

# Check for errors
if [ ! -f /tmp/$LPID.stat ]; then
	# Process did not run successfully
	$ECHONL "\nError: ${STATMSG}"
	STATMSG=
	exit 1
else
	LSTAT=`cat /tmp/$LPID.stat`
	if [ $LSTAT -ne 0 ]; then
		$ECHONL "\nError: ${STATMSG}"
		STATMSG=
		exit 1
	fi
fi

# Return to base dir
cd $CURR_DIR


# Generate SID configuration
#cp $SID_CONF_BASE $SID_GEN_DIR/conf/${MOD_NAME}_sid.conf
#sed s/##MOD_NAME##/${MOD_NAME}/g < $SID_CONF_TEMPLATE > $SID_GEN_DIR/conf/${MOD_NAME}_cosim.conf

$ECHONL "\nDone.... Compiled and installed ${MOD_NAME} hw model library for the Co-Simulator to use. All generated files can be found in \"$SID_GEN_DIR\". A sample configuration can be found in \"$SID_GEN_DIR/conf/${MOD_NAME}_cosim.conf\". \n"

exit 0

#
# Build & Install script template for a generated Verilog SID model
# The source files need to be copied to "${SID_ROOT}/src/sid/component/${MOD_NAME}/"
# This script needs to =be run from "${SID_ROOT}/build/sid/component/${MOD_NAME}/"
#
# Requires: ${SID_ROOT}, ${VERILATOR_ROOT}, $SYSTEMPERL, ${MOD_NAME}, ${MOD_SRC_DIR} ${VTRACE} or $SPTRACE
#
#

echo $$ > /tmp/$$.lock

# FUNCTIONS
###########################
CleanUp()
{
	rm -rf /tmp/$$.lock
}

Compile()
{

# If generated file X${MOD_NAME}.cxx changed compile
NEWMD5SUM0=`md5sum ${MOD_SRC_DIR}/X${MOD_NAME}.cxx | cut -d " " -f1`
if [ -f .md5sum/X${MOD_NAME}.md5sum ]; then
	OLDMD5SUM0=`cat .md5sum/X${MOD_NAME}.md5sum`
	if [ "$OLDMD5SUM0" = "$NEWMD5SUM0" ]; then
		COMPILE0=0
	else
		COMPILE0=1
	fi
else
	COMPILE0=1
fi

if [ $COMPILE0 -eq 1 ]; then
	if $BASH ${SID_COMPONENT_BUILD_DIR}/libtool --tag=CXX --mode=compile g++ -DHAVE_CONFIG_H -I${MOD_SRC_DIR} -I${SID_COMPONENT_BUILD_DIR} -I. -I${SID_COMPONENT_BUILD_DIR}/../include -I${SID_COMPONENT_SRC_DIR}/../include  -I${VERILATOR_ROOT}/include -DVL_PRINTF=printf -DVM_TRACE=1 -DVM_COVERAGE=0 -I${VERILATOR_ROOT}/include/vltstd -I${SYSTEMPERL}/src -g -O2 -D${TRACE} -MT X${MOD_NAME}.lo -MMD -MD -MP -MF ".deps/X${MOD_NAME}.Tpo" -c -o X${MOD_NAME}.lo ${MOD_SRC_DIR}/X${MOD_NAME}.cxx; \
		then mv -f ".deps/X${MOD_NAME}.Tpo" ".deps/X${MOD_NAME}.Plo"; echo $NEWMD5SUM0 > .md5sum/X${MOD_NAME}.md5sum ; \
		else rm -f ".deps/X${MOD_NAME}.Tpo"; rm -rf .md5sum/X${MOD_NAME}.md5sum; exit 1; fi
fi

# If file verilated.cpp changed compile
NEWMD5SUM1=`md5sum ${VERILATOR_ROOT}/include/verilated.cpp | cut -d " " -f1`
if [ -f .md5sum/verilated.md5sum ]; then
	OLDMD5SUM1=`cat .md5sum/verilated.md5sum`
	if [ "$OLDMD5SUM1" = "$NEWMD5SUM1" ]; then
		COMPILE1=0
	else
		COMPILE1=1
	fi
else
	COMPILE1=1
fi

if [ $COMPILE1 -eq 1 ]; then
	if $BASH ${SID_COMPONENT_BUILD_DIR}/libtool --tag=CXX --mode=compile g++ -DHAVE_CONFIG_H -I${MOD_SRC_DIR} -I${SID_COMPONENT_BUILD_DIR} -I. -I${SID_COMPONENT_BUILD_DIR}/../include -I${SID_COMPONENT_SRC_DIR}/../include  -I${VERILATOR_ROOT}/include -DVL_PRINTF=printf -DVM_TRACE=1 -DVM_COVERAGE=0 -I${VERILATOR_ROOT}/include/vltstd -I${SYSTEMPERL}/src -g -O2 -D${TRACE} -MT X${MOD_NAME}.lo -MMD -MD -MP -MF ".deps/verilated.Tpo" -c -o verilated.lo ${VERILATOR_ROOT}/include/verilated.cpp; \
#	if /bin/bash ../libtool --tag=CXX --mode=compile g++ -DHAVE_CONFIG_H -I. -I${SID_ROOT}/src/sid/component/${MOD_NAME} -I.. -I. -I../../include -I${SID_ROOT}/src/sid/component/${MOD_NAME}/../../include  -I${VERILATOR_ROOT}/include -DVL_PRINTF=printf -DVM_TRACE=1 -DVM_COVERAGE=0 -I${VERILATOR_ROOT}/include/vltstd -I${SYSTEMPERL}/src -g -O2 -D${TRACE} -MT verilated.lo -MMD -MD -MP -MF ".deps/verilated.Tpo" -c -o verilated.lo ${VERILATOR_ROOT}/include/verilated.cpp; \
		then mv -f ".deps/verilated.Tpo" ".deps/verilated.Plo"; echo $NEWMD5SUM1 > .md5sum/verilated.md5sum; \
		else rm -f ".deps/verilated.Tpo"; rm -rf .md5sum/verilated.md5sum; exit 1; fi
fi

# Compile Either verilated_vcd_c or SpTraceVcdC
if [ $VTRACE ]; then

# Compile verilated_vcd_c if changed
NEWMD5SUM2=`md5sum ${VERILATOR_ROOT}/include/verilated_vcd_c.cpp | cut -d " " -f1`
if [ -f .md5sum/verilated_vcd_c.md5sum ]; then
	OLDMD5SUM2=`cat .md5sum/verilated_vcd_c.md5sum`
	if [ "$OLDMD5SUM2" = "$NEWMD5SUM2" ]; then
		COMPILE2=0
	else
		COMPILE2=1
	fi
else
	COMPILE2=1
fi

if [ $COMPILE2 -eq 1 ]; then
	if $BASH ${SID_COMPONENT_BUILD_DIR}/libtool --tag=CXX --mode=compile g++ -DHAVE_CONFIG_H -I${MOD_SRC_DIR} -I${SID_COMPONENT_BUILD_DIR} -I. -I${SID_COMPONENT_BUILD_DIR}/../include -I${SID_COMPONENT_SRC_DIR}/../include  -I${VERILATOR_ROOT}/include -DVL_PRINTF=printf -DVM_TRACE=1 -DVM_COVERAGE=0 -I${VERILATOR_ROOT}/include/vltstd -I${SYSTEMPERL}/src -g -O2 -D${TRACE} -MT verilated_vcd_c.lo -MMD -MD -MP -MF ".deps/verilated_vcd_c.Tpo" -c -o verilated_vcd_c.lo ${VERILATOR_ROOT}/include/verilated_vcd_c.cpp; \
#	if /bin/bash ../libtool --tag=CXX --mode=compile g++ -DHAVE_CONFIG_H -I. -I${SID_ROOT}/src/sid/component/${MOD_NAME} -I.. -I. -I../../include -I${SID_ROOT}/src/sid/component/${MOD_NAME}/../../include  -I${VERILATOR_ROOT}/include -DVL_PRINTF=printf -DVM_TRACE=1 -DVM_COVERAGE=0 -I${VERILATOR_ROOT}/include/vltstd -I${SYSTEMPERL}/src -g -O2 -D${TRACE} -MT verilated_vcd_c.lo -MMD -MD -MP -MF ".deps/verilated_vcd_c.Tpo" -c -o verilated_vcd_c.lo ${VERILATOR_ROOT}/include/verilated_vcd_c.cpp; \
		then mv -f ".deps/verilated_vcd_c.Tpo" ".deps/verilated_vcd_c.Plo"; echo $NEWMD5SUM2 > .md5sum/verilated_vcd_c.md5sum; \
		else rm -f ".deps/verilated_vcd_c.Tpo"; rm -rf .md5sum/verilated_vcd_c.md5sum; exit 1; fi
fi

elif [ $SPTRACE ]; then

# If file SpTraceVcdC.cpp changed compile
NEWMD5SUM2=`md5sum ${SYSTEMPERL}/src/SpTraceVcdC.cpp | cut -d " " -f1`
if [ -f .md5sum/SpTraceVcdC.md5sum ]; then
	OLDMD5SUM2=`cat .md5sum/SpTraceVcdC.md5sum`
	if [ "$OLDMD5SUM2" = "$NEWMD5SUM2" ]; then
		COMPILE2=0
	else
		COMPILE2=1
	fi
else
	COMPILE2=1
fi

if [ $COMPILE2 -eq 1 ]; then
	if $BASH ${SID_COMPONENT_BUILD_DIR}/libtool --tag=CXX --mode=compile g++ -DHAVE_CONFIG_H -I${MOD_SRC_DIR} -I${SID_COMPONENT_BUILD_DIR} -I. -I${SID_COMPONENT_BUILD_DIR}/../include -I${SID_COMPONENT_SRC_DIR}/../include  -I${VERILATOR_ROOT}/include -DVL_PRINTF=printf -DVM_TRACE=1 -DVM_COVERAGE=0 -I${VERILATOR_ROOT}/include/vltstd -I${SYSTEMPERL}/src -g -O2 -D${TRACE} -MT SpTraceVcdC.lo -MMD -MD -MP -MF ".deps/SpTraceVcdC.Tpo" -c -o SpTraceVcdC.lo ${SYSTEMPERL}/src/SpTraceVcdC.cpp; \
#	if /bin/bash ../libtool --tag=CXX --mode=compile g++ -DHAVE_CONFIG_H -I. -I${SID_ROOT}/src/sid/component/${MOD_NAME} -I.. -I. -I../../include -I${SID_ROOT}/src/sid/component/${MOD_NAME}/../../include  -I${VERILATOR_ROOT}/include -DVL_PRINTF=printf -DVM_TRACE=1 -DVM_COVERAGE=0 -I${VERILATOR_ROOT}/include/vltstd -I${SYSTEMPERL}/src -g -O2 -D${TRACE} -MT SpTraceVcdC.lo -MMD -MD -MP -MF ".deps/SpTraceVcdC.Tpo" -c -o SpTraceVcdC.lo ${SYSTEMPERL}/src/SpTraceVcdC.cpp; \
	then mv -f ".deps/SpTraceVcdC.Tpo" ".deps/SpTraceVcdC.Plo"; echo $NEWMD5SUM2 > .md5sum/SpTraceVcdC.md5sum; \
	else rm -f ".deps/SpTraceVcdC.Tpo"; rm -rf .md5sum/SpTraceVcdC.md5sum; exit 1; fi
fi

fi

# Compile Verilator Generated Design Files if changed
NEWMD5SUM3=`md5sum ${MOD_SRC_DIR}/V${MOD_NAME}__ALLcls.cpp | cut -d " " -f1`
if [ -f .md5sum/V${MOD_NAME}__ALLcls.md5sum ]; then
	OLDMD5SUM3=`cat .md5sum/V${MOD_NAME}__ALLcls.md5sum`
	if [ "$OLDMD5SUM3" = "$NEWMD5SUM3" ]; then
		COMPILE3=0
	else
		COMPILE3=1
	fi
else
	COMPILE3=1
fi

if [ $COMPILE3 -eq 1 ]; then
	if $BASH ${SID_COMPONENT_BUILD_DIR}/libtool --tag=CXX --mode=compile g++ -DHAVE_CONFIG_H -I${MOD_SRC_DIR} -I${SID_COMPONENT_BUILD_DIR} -I. -I${SID_COMPONENT_BUILD_DIR}/../include -I${SID_COMPONENT_SRC_DIR}/../include  -I${VERILATOR_ROOT}/include -DVL_PRINTF=printf -DVM_TRACE=1 -DVM_COVERAGE=0 -I${VERILATOR_ROOT}/include/vltstd -I${SYSTEMPERL}/src -g -O2 -D${TRACE} -MT V${MOD_NAME}__ALLcls.lo -MMD -MD -MP -MF ".deps/V${MOD_NAME}__ALLcls.Tpo" -c -o V${MOD_NAME}__ALLcls.lo ${MOD_SRC_DIR}/V${MOD_NAME}__ALLcls.cpp; \
#	if /bin/bash ../libtool --tag=CXX --mode=compile g++ -DHAVE_CONFIG_H -I. -I${SID_ROOT}/src/sid/component/${MOD_NAME} -I.. -I. -I../../include -I${SID_ROOT}/src/sid/component/${MOD_NAME}/../../include  -I${VERILATOR_ROOT}/include -DVL_PRINTF=printf -DVM_TRACE=1 -DVM_COVERAGE=0 -I${VERILATOR_ROOT}/include/vltstd -I${SYSTEMPERL}/src -g -O2 -D${TRACE} -MT V${MOD_NAME}__ALLcls.lo -MMD -MD -MP -MF ".deps/V${MOD_NAME}__ALLcls.Tpo" -c -o V${MOD_NAME}__ALLcls.lo ${SID_ROOT}/src/sid/component/${MOD_NAME}/V${MOD_NAME}__ALLcls.cpp; \
		then mv -f ".deps/V${MOD_NAME}__ALLcls.Tpo" ".deps/V${MOD_NAME}__ALLcls.Plo"; echo $NEWMD5SUM3 > .md5sum/V${MOD_NAME}__ALLcls.md5sum; \
		else rm -f ".deps/V${MOD_NAME}__ALLcls.Tpo"; rm -rf .md5sum/V${MOD_NAME}__ALLcls.md5sum; exit 1; fi
fi

# Compile Verilator Generated Design Files if changed
NEWMD5SUM4=`md5sum ${MOD_SRC_DIR}/V${MOD_NAME}__ALLsup.cpp | cut -d " " -f1`
if [ -f .md5sum/V${MOD_NAME}__ALLsup.md5sum ]; then
	OLDMD5SUM4=`cat .md5sum/V${MOD_NAME}__ALLsup.md5sum`
	if [ "$OLDMD5SUM4" = "$NEWMD5SUM4" ]; then
		COMPILE4=0
	else
		COMPILE4=1
	fi
else
	COMPILE4=1
fi

if [ $COMPILE4 -eq 1 ]; then
	if $BASH ${SID_COMPONENT_BUILD_DIR}/libtool --tag=CXX --mode=compile g++ -DHAVE_CONFIG_H -I${MOD_SRC_DIR} -I${SID_COMPONENT_BUILD_DIR} -I. -I${SID_COMPONENT_BUILD_DIR}/../include -I${SID_COMPONENT_SRC_DIR}/../include  -I${VERILATOR_ROOT}/include -DVL_PRINTF=printf -DVM_TRACE=1 -DVM_COVERAGE=0 -I${VERILATOR_ROOT}/include/vltstd -I${SYSTEMPERL}/src -g -O2 -D${TRACE} -MT V${MOD_NAME}__ALLsup.lo -MMD -MD -MP -MF ".deps/V${MOD_NAME}__ALLsup.Tpo" -c -o V${MOD_NAME}__ALLsup.lo ${MOD_SRC_DIR}/V${MOD_NAME}__ALLsup.cpp; \
#	if /bin/bash ../libtool --tag=CXX --mode=compile g++ -DHAVE_CONFIG_H -I. -I${SID_ROOT}/src/sid/component/${MOD_NAME} -I.. -I. -I../../include -I${SID_ROOT}/src/sid/component/${MOD_NAME}/../../include  -I${VERILATOR_ROOT}/include -DVL_PRINTF=printf -DVM_TRACE=1 -DVM_COVERAGE=0 -I${VERILATOR_ROOT}/include/vltstd -I${SYSTEMPERL}/src -g -O2 -D${TRACE} -MT V${MOD_NAME}__ALLsup.lo -MMD -MD -MP -MF ".deps/V${MOD_NAME}__ALLsup.Tpo" -c -o V${MOD_NAME}__ALLsup.lo ${SID_ROOT}/src/sid/component/${MOD_NAME}/V${MOD_NAME}__ALLsup.cpp; \
		then mv -f ".deps/V${MOD_NAME}__ALLsup.Tpo" ".deps/V${MOD_NAME}__ALLsup.Plo"; echo $NEWMD5SUM4 > .md5sum/V${MOD_NAME}__ALLsup.md5sum; \
		else rm -f ".deps/V${MOD_NAME}__ALLsup.Tpo"; rm -rf .md5sum/V${MOD_NAME}__ALLsup.md5sum; exit 1; fi
	 # Store the new md5
fi

}

###########################
# Create a pid file
SELFPID=$$
#if [ -f /tmp/$$.lock ]; then
#	rm -rf /tmp/$$.lock
#fi
#echo $$ > /tmp/$$.lock
if [ -f /tmp/$$.stat ]; then
	rm -rf /tmp/$$.stat
fi
echo 1 > /tmp/$$.stat

# Set trap signals
trap 'CleanUp' 0
trap 'exit 1' 1 2 3 13 15

# Internal Vars
RECOMPILE=0

# File containing build environment vars
if [ ! $BUILD_ENV_FILE ]; then
	echo "SID Build Script Error: Build Environment Not Setup."
	exit 1
fi
# Source build environment file
. $BUILD_ENV_FILE
# BUILD_BASEDIR=`dirname $0`
# . $BUILD_BASEDIR/build_install_env

# Check for defines
if [ ! $SID_ROOT ]; then
	echo "SID Build Script Error: SID_ROOT not defined."
	exit 1
fi
if [ ! $VERILATOR_ROOT ]; then
	echo "SID Build Script Error: VERILATOR_ROOT not defined."
	exit 1
fi
if [ ! $SYSTEMPERL ]; then
	echo "SID Build Script Error: SYSTEMPERL not defined."
	exit 1
fi
if [ ! $MOD_NAME ]; then
	echo "SID Build Script Error: MOD_NAME not defined."
	exit 1
fi

# Compilation Flags and Includes
if [ $VTRACE ]; then
	TRACE=VERILATED_TRACE
	TRACE_LIB=verilated_vcd_c
elif [ $SPTRACE ]; then
	TRACE=SP_TRACE
	TRACE_LIB=SpTraceVcdC
else
	echo "SID Build Script Error: Either VTRACE or SPTRACE must be defined."
	exit 1
fi

# Local Variables
SID_COMPONENT_BUILD_DIR=$SID_ROOT/build/sid/component
SID_COMPONENT_SRC_DIR=$SID_ROOT/src/sid/component
BASH=$(which bash)
INSTALL=$(which install)

# Compile Code
Compile

# Archive into a library
$BASH ${SID_COMPONENT_BUILD_DIR}/libtool --tag=CXX --mode=link g++ -g -O2 -o libX${MOD_NAME}.la -rpath ${MOD_INSTALL_DIR} -module -no-undefined X${MOD_NAME}.lo verilated.lo ${TRACE_LIB}.lo V${MOD_NAME}__ALLcls.lo V${MOD_NAME}__ALLsup.lo -lstdc++ -lm

# Error check for linking
if [ $? -ne 0 ]; then
	if [ $RECOMPILE -eq 0 ]; then
		rm -rf ./md5sum/*	# If linking error fresh rebuild one time
		RECOMPILE=1
		Compile
	else
		echo -e "\nError: Could not create Co-Simulation component library libX${MOD_NAME}.la successfully.\n"
		exit 1
	fi
fi

# Install the library
$BASH ${SID_COMPONENT_BUILD_DIR}/libtool --mode=install $INSTALL -c  "libX${MOD_NAME}.la" "${MOD_INSTALL_DIR}/libX${MOD_NAME}.la"
# Error check for install
if [ $? -ne 0 ]; then
	echo -e "\nError: Could not install Co-Simulation component library libX${MOD_NAME}.la successfully."
	exit 1
fi

# Finalize the library
$BASH ${SID_COMPONENT_BUILD_DIR}/libtool --mode=finish "${MOD_INSTALL_DIR}"
# Error check for install
if [ $? -ne 0 ]; then
	echo -e "\nError: Could not finalize Co-Simulation component library libX${MOD_NAME}.la successfully."
	exit 1
fi

# Comes here only if exiting normally
echo 0 > /tmp/$$.stat

#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=MinGW-Windows
CND_DLIB_EXT=dll
CND_CONF=Release
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/Sources/FestoProcessAccess.o \
	${OBJECTDIR}/Sources/HeightProfileCheck.o \
	${OBJECTDIR}/Sources/StubHeightSensor.o \
	${OBJECTDIR}/Sources/UnitTester.o \
	${OBJECTDIR}/Sources/factory.o \
	${OBJECTDIR}/Sources/fsm.o \
	${OBJECTDIR}/Sources/main.o \
	${OBJECTDIR}/Sources/minilab1008processimage.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/programm.exe

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/programm.exe: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/programm ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/Sources/FestoProcessAccess.o: Sources/FestoProcessAccess.cpp 
	${MKDIR} -p ${OBJECTDIR}/Sources
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Sources/FestoProcessAccess.o Sources/FestoProcessAccess.cpp

${OBJECTDIR}/Sources/HeightProfileCheck.o: Sources/HeightProfileCheck.cpp 
	${MKDIR} -p ${OBJECTDIR}/Sources
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Sources/HeightProfileCheck.o Sources/HeightProfileCheck.cpp

${OBJECTDIR}/Sources/StubHeightSensor.o: Sources/StubHeightSensor.cpp 
	${MKDIR} -p ${OBJECTDIR}/Sources
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Sources/StubHeightSensor.o Sources/StubHeightSensor.cpp

${OBJECTDIR}/Sources/UnitTester.o: Sources/UnitTester.cpp 
	${MKDIR} -p ${OBJECTDIR}/Sources
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Sources/UnitTester.o Sources/UnitTester.cpp

${OBJECTDIR}/Sources/factory.o: Sources/factory.cpp 
	${MKDIR} -p ${OBJECTDIR}/Sources
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Sources/factory.o Sources/factory.cpp

${OBJECTDIR}/Sources/fsm.o: Sources/fsm.cpp 
	${MKDIR} -p ${OBJECTDIR}/Sources
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Sources/fsm.o Sources/fsm.cpp

${OBJECTDIR}/Sources/main.o: Sources/main.cpp 
	${MKDIR} -p ${OBJECTDIR}/Sources
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Sources/main.o Sources/main.cpp

${OBJECTDIR}/Sources/minilab1008processimage.o: Sources/minilab1008processimage.cpp 
	${MKDIR} -p ${OBJECTDIR}/Sources
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Sources/minilab1008processimage.o Sources/minilab1008processimage.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/programm.exe

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc

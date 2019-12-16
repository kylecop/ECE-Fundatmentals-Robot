#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Include project Makefile
ifeq "${IGNORE_LOCAL}" "TRUE"
# do not include local makefile. User is passing all local related variables already
else
include Makefile
# Include makefile containing local settings
ifeq "$(wildcard nbproject/Makefile-local-default.mk)" "nbproject/Makefile-local-default.mk"
include nbproject/Makefile-local-default.mk
endif
endif

# Environment
MKDIR=gnumkdir -p
RM=rm -f 
MV=mv 
CP=cp 

# Macros
CND_CONF=default
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
IMAGE_TYPE=debug
OUTPUT_SUFFIX=elf
DEBUGGABLE_SUFFIX=elf
FINAL_IMAGE=dist/${CND_CONF}/${IMAGE_TYPE}/Project9Home.${IMAGE_TYPE}.${OUTPUT_SUFFIX}
else
IMAGE_TYPE=production
OUTPUT_SUFFIX=hex
DEBUGGABLE_SUFFIX=elf
FINAL_IMAGE=dist/${CND_CONF}/${IMAGE_TYPE}/Project9Home.${IMAGE_TYPE}.${OUTPUT_SUFFIX}
endif

ifeq ($(COMPARE_BUILD), true)
COMPARISON_BUILD=
else
COMPARISON_BUILD=
endif

ifdef SUB_IMAGE_ADDRESS

else
SUB_IMAGE_ADDRESS_COMMAND=
endif

# Object Directory
OBJECTDIR=build/${CND_CONF}/${IMAGE_TYPE}

# Distribution Directory
DISTDIR=dist/${CND_CONF}/${IMAGE_TYPE}

# Source Files Quoted if spaced
SOURCEFILES_QUOTED_IF_SPACED=main.c robotOS.c testSuite.c utilities.c microMotorController.C microLEDController.c microPhotoResistorController.c microLatchController.c robotOsMotorController.c robotOsBumperController.c mainSetup.c robotOsPhotoResistorController.c

# Object Files Quoted if spaced
OBJECTFILES_QUOTED_IF_SPACED=${OBJECTDIR}/main.o ${OBJECTDIR}/robotOS.o ${OBJECTDIR}/testSuite.o ${OBJECTDIR}/utilities.o ${OBJECTDIR}/microMotorController.o ${OBJECTDIR}/microLEDController.o ${OBJECTDIR}/microPhotoResistorController.o ${OBJECTDIR}/microLatchController.o ${OBJECTDIR}/robotOsMotorController.o ${OBJECTDIR}/robotOsBumperController.o ${OBJECTDIR}/mainSetup.o ${OBJECTDIR}/robotOsPhotoResistorController.o
POSSIBLE_DEPFILES=${OBJECTDIR}/main.o.d ${OBJECTDIR}/robotOS.o.d ${OBJECTDIR}/testSuite.o.d ${OBJECTDIR}/utilities.o.d ${OBJECTDIR}/microMotorController.o.d ${OBJECTDIR}/microLEDController.o.d ${OBJECTDIR}/microPhotoResistorController.o.d ${OBJECTDIR}/microLatchController.o.d ${OBJECTDIR}/robotOsMotorController.o.d ${OBJECTDIR}/robotOsBumperController.o.d ${OBJECTDIR}/mainSetup.o.d ${OBJECTDIR}/robotOsPhotoResistorController.o.d

# Object Files
OBJECTFILES=${OBJECTDIR}/main.o ${OBJECTDIR}/robotOS.o ${OBJECTDIR}/testSuite.o ${OBJECTDIR}/utilities.o ${OBJECTDIR}/microMotorController.o ${OBJECTDIR}/microLEDController.o ${OBJECTDIR}/microPhotoResistorController.o ${OBJECTDIR}/microLatchController.o ${OBJECTDIR}/robotOsMotorController.o ${OBJECTDIR}/robotOsBumperController.o ${OBJECTDIR}/mainSetup.o ${OBJECTDIR}/robotOsPhotoResistorController.o

# Source Files
SOURCEFILES=main.c robotOS.c testSuite.c utilities.c microMotorController.C microLEDController.c microPhotoResistorController.c microLatchController.c robotOsMotorController.c robotOsBumperController.c mainSetup.c robotOsPhotoResistorController.c


CFLAGS=
ASFLAGS=
LDLIBSOPTIONS=

############# Tool locations ##########################################
# If you copy a project from one host to another, the path where the  #
# compiler is installed may be different.                             #
# If you open this project with MPLAB X in the new host, this         #
# makefile will be regenerated and the paths will be corrected.       #
#######################################################################
# fixDeps replaces a bunch of sed/cat/printf statements that slow down the build
FIXDEPS=fixDeps

.build-conf:  ${BUILD_SUBPROJECTS}
ifneq ($(INFORMATION_MESSAGE), )
	@echo $(INFORMATION_MESSAGE)
endif
	${MAKE}  -f nbproject/Makefile-default.mk dist/${CND_CONF}/${IMAGE_TYPE}/Project9Home.${IMAGE_TYPE}.${OUTPUT_SUFFIX}

MP_PROCESSOR_OPTION=30F3013
MP_LINKER_FILE_OPTION=,-Tp30F3013.gld
# ------------------------------------------------------------------------------------
# Rules for buildStep: assemble
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
else
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: assembleWithPreprocess
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
else
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: compile
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
${OBJECTDIR}/main.o: main.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/main.o.d 
	@${RM} ${OBJECTDIR}/main.o.ok ${OBJECTDIR}/main.o.err 
	@${RM} ${OBJECTDIR}/main.o 
	@${FIXDEPS} "${OBJECTDIR}/main.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c ${MP_CC} $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PICKIT2=1 -omf=elf -x c -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/main.o.d" -o ${OBJECTDIR}/main.o main.c    
	
${OBJECTDIR}/robotOS.o: robotOS.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/robotOS.o.d 
	@${RM} ${OBJECTDIR}/robotOS.o.ok ${OBJECTDIR}/robotOS.o.err 
	@${RM} ${OBJECTDIR}/robotOS.o 
	@${FIXDEPS} "${OBJECTDIR}/robotOS.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c ${MP_CC} $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PICKIT2=1 -omf=elf -x c -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/robotOS.o.d" -o ${OBJECTDIR}/robotOS.o robotOS.c    
	
${OBJECTDIR}/testSuite.o: testSuite.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/testSuite.o.d 
	@${RM} ${OBJECTDIR}/testSuite.o.ok ${OBJECTDIR}/testSuite.o.err 
	@${RM} ${OBJECTDIR}/testSuite.o 
	@${FIXDEPS} "${OBJECTDIR}/testSuite.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c ${MP_CC} $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PICKIT2=1 -omf=elf -x c -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/testSuite.o.d" -o ${OBJECTDIR}/testSuite.o testSuite.c    
	
${OBJECTDIR}/utilities.o: utilities.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/utilities.o.d 
	@${RM} ${OBJECTDIR}/utilities.o.ok ${OBJECTDIR}/utilities.o.err 
	@${RM} ${OBJECTDIR}/utilities.o 
	@${FIXDEPS} "${OBJECTDIR}/utilities.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c ${MP_CC} $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PICKIT2=1 -omf=elf -x c -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/utilities.o.d" -o ${OBJECTDIR}/utilities.o utilities.c    
	
${OBJECTDIR}/microMotorController.o: microMotorController.C  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/microMotorController.o.d 
	@${RM} ${OBJECTDIR}/microMotorController.o.ok ${OBJECTDIR}/microMotorController.o.err 
	@${RM} ${OBJECTDIR}/microMotorController.o 
	@${FIXDEPS} "${OBJECTDIR}/microMotorController.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c ${MP_CC} $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PICKIT2=1 -omf=elf -x c -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/microMotorController.o.d" -o ${OBJECTDIR}/microMotorController.o microMotorController.C    
	
${OBJECTDIR}/microLEDController.o: microLEDController.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/microLEDController.o.d 
	@${RM} ${OBJECTDIR}/microLEDController.o.ok ${OBJECTDIR}/microLEDController.o.err 
	@${RM} ${OBJECTDIR}/microLEDController.o 
	@${FIXDEPS} "${OBJECTDIR}/microLEDController.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c ${MP_CC} $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PICKIT2=1 -omf=elf -x c -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/microLEDController.o.d" -o ${OBJECTDIR}/microLEDController.o microLEDController.c    
	
${OBJECTDIR}/microPhotoResistorController.o: microPhotoResistorController.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/microPhotoResistorController.o.d 
	@${RM} ${OBJECTDIR}/microPhotoResistorController.o.ok ${OBJECTDIR}/microPhotoResistorController.o.err 
	@${RM} ${OBJECTDIR}/microPhotoResistorController.o 
	@${FIXDEPS} "${OBJECTDIR}/microPhotoResistorController.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c ${MP_CC} $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PICKIT2=1 -omf=elf -x c -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/microPhotoResistorController.o.d" -o ${OBJECTDIR}/microPhotoResistorController.o microPhotoResistorController.c    
	
${OBJECTDIR}/microLatchController.o: microLatchController.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/microLatchController.o.d 
	@${RM} ${OBJECTDIR}/microLatchController.o.ok ${OBJECTDIR}/microLatchController.o.err 
	@${RM} ${OBJECTDIR}/microLatchController.o 
	@${FIXDEPS} "${OBJECTDIR}/microLatchController.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c ${MP_CC} $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PICKIT2=1 -omf=elf -x c -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/microLatchController.o.d" -o ${OBJECTDIR}/microLatchController.o microLatchController.c    
	
${OBJECTDIR}/robotOsMotorController.o: robotOsMotorController.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/robotOsMotorController.o.d 
	@${RM} ${OBJECTDIR}/robotOsMotorController.o.ok ${OBJECTDIR}/robotOsMotorController.o.err 
	@${RM} ${OBJECTDIR}/robotOsMotorController.o 
	@${FIXDEPS} "${OBJECTDIR}/robotOsMotorController.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c ${MP_CC} $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PICKIT2=1 -omf=elf -x c -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/robotOsMotorController.o.d" -o ${OBJECTDIR}/robotOsMotorController.o robotOsMotorController.c    
	
${OBJECTDIR}/robotOsBumperController.o: robotOsBumperController.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/robotOsBumperController.o.d 
	@${RM} ${OBJECTDIR}/robotOsBumperController.o.ok ${OBJECTDIR}/robotOsBumperController.o.err 
	@${RM} ${OBJECTDIR}/robotOsBumperController.o 
	@${FIXDEPS} "${OBJECTDIR}/robotOsBumperController.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c ${MP_CC} $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PICKIT2=1 -omf=elf -x c -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/robotOsBumperController.o.d" -o ${OBJECTDIR}/robotOsBumperController.o robotOsBumperController.c    
	
${OBJECTDIR}/mainSetup.o: mainSetup.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/mainSetup.o.d 
	@${RM} ${OBJECTDIR}/mainSetup.o.ok ${OBJECTDIR}/mainSetup.o.err 
	@${RM} ${OBJECTDIR}/mainSetup.o 
	@${FIXDEPS} "${OBJECTDIR}/mainSetup.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c ${MP_CC} $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PICKIT2=1 -omf=elf -x c -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/mainSetup.o.d" -o ${OBJECTDIR}/mainSetup.o mainSetup.c    
	
${OBJECTDIR}/robotOsPhotoResistorController.o: robotOsPhotoResistorController.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/robotOsPhotoResistorController.o.d 
	@${RM} ${OBJECTDIR}/robotOsPhotoResistorController.o.ok ${OBJECTDIR}/robotOsPhotoResistorController.o.err 
	@${RM} ${OBJECTDIR}/robotOsPhotoResistorController.o 
	@${FIXDEPS} "${OBJECTDIR}/robotOsPhotoResistorController.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c ${MP_CC} $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PICKIT2=1 -omf=elf -x c -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/robotOsPhotoResistorController.o.d" -o ${OBJECTDIR}/robotOsPhotoResistorController.o robotOsPhotoResistorController.c    
	
else
${OBJECTDIR}/main.o: main.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/main.o.d 
	@${RM} ${OBJECTDIR}/main.o.ok ${OBJECTDIR}/main.o.err 
	@${RM} ${OBJECTDIR}/main.o 
	@${FIXDEPS} "${OBJECTDIR}/main.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c ${MP_CC} $(MP_EXTRA_CC_PRE)  -g -omf=elf -x c -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/main.o.d" -o ${OBJECTDIR}/main.o main.c    
	
${OBJECTDIR}/robotOS.o: robotOS.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/robotOS.o.d 
	@${RM} ${OBJECTDIR}/robotOS.o.ok ${OBJECTDIR}/robotOS.o.err 
	@${RM} ${OBJECTDIR}/robotOS.o 
	@${FIXDEPS} "${OBJECTDIR}/robotOS.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c ${MP_CC} $(MP_EXTRA_CC_PRE)  -g -omf=elf -x c -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/robotOS.o.d" -o ${OBJECTDIR}/robotOS.o robotOS.c    
	
${OBJECTDIR}/testSuite.o: testSuite.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/testSuite.o.d 
	@${RM} ${OBJECTDIR}/testSuite.o.ok ${OBJECTDIR}/testSuite.o.err 
	@${RM} ${OBJECTDIR}/testSuite.o 
	@${FIXDEPS} "${OBJECTDIR}/testSuite.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c ${MP_CC} $(MP_EXTRA_CC_PRE)  -g -omf=elf -x c -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/testSuite.o.d" -o ${OBJECTDIR}/testSuite.o testSuite.c    
	
${OBJECTDIR}/utilities.o: utilities.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/utilities.o.d 
	@${RM} ${OBJECTDIR}/utilities.o.ok ${OBJECTDIR}/utilities.o.err 
	@${RM} ${OBJECTDIR}/utilities.o 
	@${FIXDEPS} "${OBJECTDIR}/utilities.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c ${MP_CC} $(MP_EXTRA_CC_PRE)  -g -omf=elf -x c -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/utilities.o.d" -o ${OBJECTDIR}/utilities.o utilities.c    
	
${OBJECTDIR}/microMotorController.o: microMotorController.C  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/microMotorController.o.d 
	@${RM} ${OBJECTDIR}/microMotorController.o.ok ${OBJECTDIR}/microMotorController.o.err 
	@${RM} ${OBJECTDIR}/microMotorController.o 
	@${FIXDEPS} "${OBJECTDIR}/microMotorController.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c ${MP_CC} $(MP_EXTRA_CC_PRE)  -g -omf=elf -x c -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/microMotorController.o.d" -o ${OBJECTDIR}/microMotorController.o microMotorController.C    
	
${OBJECTDIR}/microLEDController.o: microLEDController.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/microLEDController.o.d 
	@${RM} ${OBJECTDIR}/microLEDController.o.ok ${OBJECTDIR}/microLEDController.o.err 
	@${RM} ${OBJECTDIR}/microLEDController.o 
	@${FIXDEPS} "${OBJECTDIR}/microLEDController.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c ${MP_CC} $(MP_EXTRA_CC_PRE)  -g -omf=elf -x c -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/microLEDController.o.d" -o ${OBJECTDIR}/microLEDController.o microLEDController.c    
	
${OBJECTDIR}/microPhotoResistorController.o: microPhotoResistorController.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/microPhotoResistorController.o.d 
	@${RM} ${OBJECTDIR}/microPhotoResistorController.o.ok ${OBJECTDIR}/microPhotoResistorController.o.err 
	@${RM} ${OBJECTDIR}/microPhotoResistorController.o 
	@${FIXDEPS} "${OBJECTDIR}/microPhotoResistorController.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c ${MP_CC} $(MP_EXTRA_CC_PRE)  -g -omf=elf -x c -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/microPhotoResistorController.o.d" -o ${OBJECTDIR}/microPhotoResistorController.o microPhotoResistorController.c    
	
${OBJECTDIR}/microLatchController.o: microLatchController.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/microLatchController.o.d 
	@${RM} ${OBJECTDIR}/microLatchController.o.ok ${OBJECTDIR}/microLatchController.o.err 
	@${RM} ${OBJECTDIR}/microLatchController.o 
	@${FIXDEPS} "${OBJECTDIR}/microLatchController.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c ${MP_CC} $(MP_EXTRA_CC_PRE)  -g -omf=elf -x c -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/microLatchController.o.d" -o ${OBJECTDIR}/microLatchController.o microLatchController.c    
	
${OBJECTDIR}/robotOsMotorController.o: robotOsMotorController.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/robotOsMotorController.o.d 
	@${RM} ${OBJECTDIR}/robotOsMotorController.o.ok ${OBJECTDIR}/robotOsMotorController.o.err 
	@${RM} ${OBJECTDIR}/robotOsMotorController.o 
	@${FIXDEPS} "${OBJECTDIR}/robotOsMotorController.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c ${MP_CC} $(MP_EXTRA_CC_PRE)  -g -omf=elf -x c -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/robotOsMotorController.o.d" -o ${OBJECTDIR}/robotOsMotorController.o robotOsMotorController.c    
	
${OBJECTDIR}/robotOsBumperController.o: robotOsBumperController.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/robotOsBumperController.o.d 
	@${RM} ${OBJECTDIR}/robotOsBumperController.o.ok ${OBJECTDIR}/robotOsBumperController.o.err 
	@${RM} ${OBJECTDIR}/robotOsBumperController.o 
	@${FIXDEPS} "${OBJECTDIR}/robotOsBumperController.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c ${MP_CC} $(MP_EXTRA_CC_PRE)  -g -omf=elf -x c -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/robotOsBumperController.o.d" -o ${OBJECTDIR}/robotOsBumperController.o robotOsBumperController.c    
	
${OBJECTDIR}/mainSetup.o: mainSetup.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/mainSetup.o.d 
	@${RM} ${OBJECTDIR}/mainSetup.o.ok ${OBJECTDIR}/mainSetup.o.err 
	@${RM} ${OBJECTDIR}/mainSetup.o 
	@${FIXDEPS} "${OBJECTDIR}/mainSetup.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c ${MP_CC} $(MP_EXTRA_CC_PRE)  -g -omf=elf -x c -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/mainSetup.o.d" -o ${OBJECTDIR}/mainSetup.o mainSetup.c    
	
${OBJECTDIR}/robotOsPhotoResistorController.o: robotOsPhotoResistorController.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/robotOsPhotoResistorController.o.d 
	@${RM} ${OBJECTDIR}/robotOsPhotoResistorController.o.ok ${OBJECTDIR}/robotOsPhotoResistorController.o.err 
	@${RM} ${OBJECTDIR}/robotOsPhotoResistorController.o 
	@${FIXDEPS} "${OBJECTDIR}/robotOsPhotoResistorController.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c ${MP_CC} $(MP_EXTRA_CC_PRE)  -g -omf=elf -x c -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/robotOsPhotoResistorController.o.d" -o ${OBJECTDIR}/robotOsPhotoResistorController.o robotOsPhotoResistorController.c    
	
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: link
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
dist/${CND_CONF}/${IMAGE_TYPE}/Project9Home.${IMAGE_TYPE}.${OUTPUT_SUFFIX}: ${OBJECTFILES}  nbproject/Makefile-${CND_CONF}.mk    
	@${MKDIR} dist/${CND_CONF}/${IMAGE_TYPE} 
	${MP_CC} $(MP_EXTRA_LD_PRE)  -omf=elf -mcpu=$(MP_PROCESSOR_OPTION)  -D__DEBUG -D__MPLAB_DEBUGGER_PICKIT2=1 -o dist/${CND_CONF}/${IMAGE_TYPE}/Project9Home.${IMAGE_TYPE}.${OUTPUT_SUFFIX} ${OBJECTFILES_QUOTED_IF_SPACED}         -Wl,--defsym=__MPLAB_BUILD=1,-Map="${DISTDIR}/${PROJECTNAME}.${IMAGE_TYPE}.map"$(MP_EXTRA_LD_POST)$(MP_LINKER_FILE_OPTION),--defsym=__ICD2RAM=1,--defsym=__MPLAB_DEBUG=1,--defsym=__DEBUG=1,--defsym=__MPLAB_DEBUGGER_PICKIT2=1
else
dist/${CND_CONF}/${IMAGE_TYPE}/Project9Home.${IMAGE_TYPE}.${OUTPUT_SUFFIX}: ${OBJECTFILES}  nbproject/Makefile-${CND_CONF}.mk   
	@${MKDIR} dist/${CND_CONF}/${IMAGE_TYPE} 
	${MP_CC} $(MP_EXTRA_LD_PRE)  -omf=elf -mcpu=$(MP_PROCESSOR_OPTION)  -o dist/${CND_CONF}/${IMAGE_TYPE}/Project9Home.${IMAGE_TYPE}.${DEBUGGABLE_SUFFIX} ${OBJECTFILES_QUOTED_IF_SPACED}         -Wl,--defsym=__MPLAB_BUILD=1,-Map="${DISTDIR}/${PROJECTNAME}.${IMAGE_TYPE}.map"$(MP_EXTRA_LD_POST)$(MP_LINKER_FILE_OPTION)
	${MP_CC_DIR}\\pic30-bin2hex dist/${CND_CONF}/${IMAGE_TYPE}/Project9Home.${IMAGE_TYPE}.${DEBUGGABLE_SUFFIX} -omf=elf
endif


# Subprojects
.build-subprojects:


# Subprojects
.clean-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r build/default
	${RM} -r dist/default

# Enable dependency checking
.dep.inc: .depcheck-impl

DEPFILES=$(shell mplabwildcard ${POSSIBLE_DEPFILES})
ifneq (${DEPFILES},)
include ${DEPFILES}
endif

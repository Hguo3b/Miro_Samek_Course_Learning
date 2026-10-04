################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

CG_TOOL_ROOT := C:/Users/huido/local_development/tmp/0918/bin

GEN_OPTS__FLAG := 
GEN_CMDS__FLAG := 

ORDERED_OBJS += \
"./bsp.o" \
"./main.o" \
"./startup_TM4C123GH6PM.o" \
"./system_TM4C123GH6PM.o" \
"./qpc/ports/arm-cm/qxk/gnu/qxk_port.o" \
"./qpc/src/qf/qep_hsm.o" \
"./qpc/src/qf/qep_msm.o" \
"./qpc/src/qf/qf_act.o" \
"./qpc/src/qf/qf_actq.o" \
"./qpc/src/qf/qf_defer.o" \
"./qpc/src/qf/qf_dyn.o" \
"./qpc/src/qf/qf_mem.o" \
"./qpc/src/qf/qf_ps.o" \
"./qpc/src/qf/qf_qact.o" \
"./qpc/src/qf/qf_qeq.o" \
"./qpc/src/qf/qf_qmact.o" \
"./qpc/src/qf/qf_time.o" \
"./qpc/src/qxk/qxk.o" \
"./qpc/src/qxk/qxk_mutex.o" \
"./qpc/src/qxk/qxk_sema.o" \
"./qpc/src/qxk/qxk_xthr.o" \
-Wl,-T"../ek-tm4c123gxl.lds" \
$(GEN_CMDS__FLAG) \

-include ../makefile.init

RM := DEL /F
RMDIR := RMDIR /S/Q

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir_vars.mk
-include qpc/ports/arm-cm/qxk/gnu/subdir_vars.mk
-include qpc/src/qf/subdir_vars.mk
-include qpc/src/qxk/subdir_vars.mk
-include subdir_rules.mk
-include qpc/ports/arm-cm/qxk/gnu/subdir_rules.mk
-include qpc/src/qf/subdir_rules.mk
-include qpc/src/qxk/subdir_rules.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C55_DEPS)),)
-include $(C55_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(S67_DEPS)),)
-include $(S67_DEPS)
endif
ifneq ($(strip $(S62_DEPS)),)
-include $(S62_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(OPT_DEPS)),)
-include $(OPT_DEPS)
endif
ifneq ($(strip $(C??_DEPS)),)
-include $(C??_DEPS)
endif
ifneq ($(strip $(ASM_UPPER_DEPS)),)
-include $(ASM_UPPER_DEPS)
endif
ifneq ($(strip $(S??_DEPS)),)
-include $(S??_DEPS)
endif
ifneq ($(strip $(C64_DEPS)),)
-include $(C64_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(S64_DEPS)),)
-include $(S64_DEPS)
endif
ifneq ($(strip $(CLA_DEPS)),)
-include $(CLA_DEPS)
endif
ifneq ($(strip $(S55_DEPS)),)
-include $(S55_DEPS)
endif
ifneq ($(strip $(SV7A_DEPS)),)
-include $(SV7A_DEPS)
endif
ifneq ($(strip $(C62_DEPS)),)
-include $(C62_DEPS)
endif
ifneq ($(strip $(C67_DEPS)),)
-include $(C67_DEPS)
endif
ifneq ($(strip $(K_DEPS)),)
-include $(K_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(C43_DEPS)),)
-include $(C43_DEPS)
endif
ifneq ($(strip $(S43_DEPS)),)
-include $(S43_DEPS)
endif
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
ifneq ($(strip $(SA_DEPS)),)
-include $(SA_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXE_OUTPUTS += \
lesson_27_qxk_semaphore.out 

EXE_OUTPUTS__QUOTED += \
"lesson_27_qxk_semaphore.out" 


# All Target
all: $(OBJS) $(LDS_SRCS) $(GEN_CMDS)
	@$(MAKE) --no-print-directory -Onone "lesson_27_qxk_semaphore.out"

# Tool invocations
lesson_27_qxk_semaphore.out: $(OBJS) $(LDS_SRCS) $(GEN_CMDS)
	@echo 'GNU Linker - building target: "$@"'
	"C:/Users/huido/local_development/tmp/0918/bin/arm-none-eabi-gcc-15.3.1.exe" -mfpu=fpv4-sp-d16 -DTM4C123GH6PM -Og -ffunction-sections -fdata-sections -g -gdwarf-3 -gstrict-dwarf -Wall -specs="nosys.specs" -mcpu=cortex-m4 -Wl,-Map,"lesson_27_qxk_semaphore.map" -nostartfiles -o"lesson_27_qxk_semaphore.out" $(ORDERED_OBJS)
	@echo 'Finished building target: "$@"'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(EXE_OUTPUTS__QUOTED)
	-$(RM) "bsp.o" "main.o" "startup_TM4C123GH6PM.o" "system_TM4C123GH6PM.o" "qpc\ports\arm-cm\qxk\gnu\qxk_port.o" "qpc\src\qf\qep_hsm.o" "qpc\src\qf\qep_msm.o" "qpc\src\qf\qf_act.o" "qpc\src\qf\qf_actq.o" "qpc\src\qf\qf_defer.o" "qpc\src\qf\qf_dyn.o" "qpc\src\qf\qf_mem.o" "qpc\src\qf\qf_ps.o" "qpc\src\qf\qf_qact.o" "qpc\src\qf\qf_qeq.o" "qpc\src\qf\qf_qmact.o" "qpc\src\qf\qf_time.o" "qpc\src\qxk\qxk.o" "qpc\src\qxk\qxk_mutex.o" "qpc\src\qxk\qxk_sema.o" "qpc\src\qxk\qxk_xthr.o" 
	-$(RM) "bsp.d" "main.d" "startup_TM4C123GH6PM.d" "system_TM4C123GH6PM.d" "qpc\ports\arm-cm\qxk\gnu\qxk_port.d" "qpc\src\qf\qep_hsm.d" "qpc\src\qf\qep_msm.d" "qpc\src\qf\qf_act.d" "qpc\src\qf\qf_actq.d" "qpc\src\qf\qf_defer.d" "qpc\src\qf\qf_dyn.d" "qpc\src\qf\qf_mem.d" "qpc\src\qf\qf_ps.d" "qpc\src\qf\qf_qact.d" "qpc\src\qf\qf_qeq.d" "qpc\src\qf\qf_qmact.d" "qpc\src\qf\qf_time.d" "qpc\src\qxk\qxk.d" "qpc\src\qxk\qxk_mutex.d" "qpc\src\qxk\qxk_sema.d" "qpc\src\qxk\qxk_xthr.d" 
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets


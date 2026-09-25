################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'GNU Compiler - building file: "$<"'
	"C:/ti/msp430-gcc/bin/msp430-elf-gcc-9.3.1.exe" -c -mmcu=msp430g2553 -mhwmult=none -D__MSP430G2553__ -I"C:/ti/ccs2101/ccs/ccs_base/msp430/include_gcc" -I"C:/Users/huido/local_development/embedded/Miro_Samek_Course_Learning/lesson_17_msp430_interrupt" -I"C:/ti/msp430-gcc/include" -Og -g -gdwarf-3 -gstrict-dwarf -Wall -MMD -MP -MF"$(basename $(<F)).d_raw" -MT"$(@)"  $(GEN_OPTS__FLAG) -o"$@" "$<"
	@echo 'Finished building: "$<"'
	@echo ' '



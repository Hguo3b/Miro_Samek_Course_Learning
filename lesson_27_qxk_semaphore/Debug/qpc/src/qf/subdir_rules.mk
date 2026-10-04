################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Each subdirectory must supply rules for building sources it contributes
qpc/src/qf/%.o: ../qpc/src/qf/%.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'GNU Compiler - building file: "$<"'
	"C:/Users/huido/local_development/tmp/0918/bin/arm-none-eabi-gcc-15.3.1.exe" -c -mcpu=cortex-m4 -march=armv7e-m -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 -DTM4C123GH6PM -I"C:/Users/huido/local_development/embedded/Miro_Samek_Course_Learning/lesson_27_qxk_semaphore" -I"C:/Users/huido/local_development/tmp/0918/bin" -I"C:/Users/huido/local_development/embedded/Miro_Samek_Course_Learning/lesson_27_qxk_semaphore/qpc/include" -I"C:/Users/huido/local_development/embedded/Miro_Samek_Course_Learning/lesson_27_qxk_semaphore/qpc/ports/arm-cm/qxk/gnu" -I"C:/Users/huido/local_development/embedded/Miro_Samek_Course_Learning/lesson_27_qxk_semaphore/CMSIS/Include" -Og -ffunction-sections -fdata-sections -g -gdwarf-3 -gstrict-dwarf -Wall -specs="nosys.specs" -MMD -MP -MF"qpc/src/qf/$(basename $(<F)).d_raw" -MT"$(@)"  $(GEN_OPTS__FLAG) -o"$@" "$<"
	@echo 'Finished building: "$<"'
	@echo ' '



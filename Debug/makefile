################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include RTOS_STACK/subdir.mk
-include MCAL/TIMER/subdir.mk
-include MCAL/MGIE/subdir.mk
-include MCAL/MDIO/subdir.mk
-include MCAL/DIO/subdir.mk
-include HAL/SS/subdir.mk
-include HAL/LCD/subdir.mk
-include HAL/HLED/subdir.mk
-include Free_RTOS/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
LSS += \
DEC_NTI_OWN_RTOS.lss \

FLASH_IMAGE += \
DEC_NTI_OWN_RTOS.hex \

SIZEDUMMY += \
sizedummy \


# All Target
all: DEC_NTI_OWN_RTOS.elf secondary-outputs

# Tool invocations
DEC_NTI_OWN_RTOS.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,DEC_NTI_OWN_RTOS.map -mmcu=atmega32 -o "DEC_NTI_OWN_RTOS.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

DEC_NTI_OWN_RTOS.lss: DEC_NTI_OWN_RTOS.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S DEC_NTI_OWN_RTOS.elf  >"DEC_NTI_OWN_RTOS.lss"
	@echo 'Finished building: $@'
	@echo ' '

DEC_NTI_OWN_RTOS.hex: DEC_NTI_OWN_RTOS.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -R .fuse -R .lock -R .signature -O ihex DEC_NTI_OWN_RTOS.elf  "DEC_NTI_OWN_RTOS.hex"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: DEC_NTI_OWN_RTOS.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega32 DEC_NTI_OWN_RTOS.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(FLASH_IMAGE)$(ELFS)$(OBJS)$(ASM_DEPS)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) DEC_NTI_OWN_RTOS.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(SIZEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets

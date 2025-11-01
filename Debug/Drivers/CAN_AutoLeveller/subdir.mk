################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Drivers/CAN_AutoLeveller/CAN_AutoLeveller.c \
../Drivers/CAN_AutoLeveller/FDCAN.c 

OBJS += \
./Drivers/CAN_AutoLeveller/CAN_AutoLeveller.o \
./Drivers/CAN_AutoLeveller/FDCAN.o 

C_DEPS += \
./Drivers/CAN_AutoLeveller/CAN_AutoLeveller.d \
./Drivers/CAN_AutoLeveller/FDCAN.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/CAN_AutoLeveller/%.o Drivers/CAN_AutoLeveller/%.su Drivers/CAN_AutoLeveller/%.cyclo: ../Drivers/CAN_AutoLeveller/%.c Drivers/CAN_AutoLeveller/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32G431xx -c -I../Core/Inc -I../Drivers/STM32G4xx_HAL_Driver/Inc -I../Drivers/STM32G4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32G4xx/Include -I../Drivers/CMSIS/Include -I"C:/Users/Jeeva/Desktop/Gen4/STM_Codes/AutoLeveller_Jeeva/Autoleveller/Drivers/CAN_AutoLeveller" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Drivers-2f-CAN_AutoLeveller

clean-Drivers-2f-CAN_AutoLeveller:
	-$(RM) ./Drivers/CAN_AutoLeveller/CAN_AutoLeveller.cyclo ./Drivers/CAN_AutoLeveller/CAN_AutoLeveller.d ./Drivers/CAN_AutoLeveller/CAN_AutoLeveller.o ./Drivers/CAN_AutoLeveller/CAN_AutoLeveller.su ./Drivers/CAN_AutoLeveller/FDCAN.cyclo ./Drivers/CAN_AutoLeveller/FDCAN.d ./Drivers/CAN_AutoLeveller/FDCAN.o ./Drivers/CAN_AutoLeveller/FDCAN.su

.PHONY: clean-Drivers-2f-CAN_AutoLeveller


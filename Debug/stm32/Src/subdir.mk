################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../stm32/Src/GPIO_.cpp \
../stm32/Src/IO.cpp \
../stm32/Src/Peripheral.cpp \
../stm32/Src/Pin.cpp \
../stm32/Src/PinList.cpp \
../stm32/Src/Port.cpp 

OBJS += \
./stm32/Src/GPIO_.o \
./stm32/Src/IO.o \
./stm32/Src/Peripheral.o \
./stm32/Src/Pin.o \
./stm32/Src/PinList.o \
./stm32/Src/Port.o 

CPP_DEPS += \
./stm32/Src/GPIO_.d \
./stm32/Src/IO.d \
./stm32/Src/Peripheral.d \
./stm32/Src/Pin.d \
./stm32/Src/PinList.d \
./stm32/Src/Port.d 


# Each subdirectory must supply rules for building sources it contributes
stm32/Src/%.o stm32/Src/%.su: ../stm32/Src/%.cpp stm32/Src/subdir.mk
	arm-none-eabi-g++ "$<" -mcpu=cortex-m4 -std=gnu++14 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F303xC -c -I../Core/Inc -I"C:/Users/muham/Files/STM32/F3Discovery_CPP/stm32/Inc" -I../Drivers/STM32F3xx_HAL_Driver/Inc -I../Drivers/STM32F3xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F3xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -fno-rtti -fno-use-cxa-atexit -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-stm32-2f-Src

clean-stm32-2f-Src:
	-$(RM) ./stm32/Src/GPIO_.d ./stm32/Src/GPIO_.o ./stm32/Src/GPIO_.su ./stm32/Src/IO.d ./stm32/Src/IO.o ./stm32/Src/IO.su ./stm32/Src/Peripheral.d ./stm32/Src/Peripheral.o ./stm32/Src/Peripheral.su ./stm32/Src/Pin.d ./stm32/Src/Pin.o ./stm32/Src/Pin.su ./stm32/Src/PinList.d ./stm32/Src/PinList.o ./stm32/Src/PinList.su ./stm32/Src/Port.d ./stm32/Src/Port.o ./stm32/Src/Port.su

.PHONY: clean-stm32-2f-Src


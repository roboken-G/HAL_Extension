# HAL_Extension - 5.0.0 dev

```c++
#include "HAL_Extension.hpp
```

```c++
namespace halex
```

## 目次
- [General](Doc/module_General/INDEX.md)
  - [コンフィグ](Doc/module_General/INDEX.md#コンフィグ)
    - [CONFIG_DISABLE_EX_CALLBACK](Doc/module_General/INDEX.md#config_disable_ex_callback)
- [Util](Doc/module_Util/INDEX.md)
  - [関数](Doc/module_Util/INDEX.md#関数)
    - [std::map](Doc/module_Util/function/map.md)
    - [math_angle](Doc/module_Util/function/math_angle.md)
  - [列挙クラス](Doc/module_Util/INDEX.md#列挙クラス)
    - [AngleType](Doc/module_Util/enum/AngleType.md)
  - [クラス](Doc/module_Util/INDEX.md#クラス)
    - [TimerCounter](Doc/module_Util/class/TimerCounter.md)
- [GPIO](Doc/module_GPIO/INDEX.md)
  - [コンフィグ](Doc/module_GPIO/INDEX.md#コンフィグ)
    - [CONFIG_DISABLE_MODULE_GPIO](Doc/module_GPIO/INDEX.md#CONFIG_DISABLE_MODULE_GPIO)
  - [関数](Doc/module_GPIO/INDEX.md#関数)
    - [GPIO](Doc/module_GPIO/function/INDEX.md#gpio)
  - [クラス](Doc/module_GPIO/INDEX.md#クラス)
    - [GPIO](Doc/module_GPIO/class/GPIO.md)
    - [DIPSwitch](Doc/module_GPIO/class/DIPSwitch.md)
    - [SevenSegment](Doc/module_GPIO/class/SevenSegment.md)
    - [FixedSevenSegment](Doc/module_GPIO/class/FixedSevenSegment.md)
    - [DynamicSevenSegment](Doc/module_GPIO/class/DynamicSevenSegment.md)
- [UART](Doc/module_UART/INDEX.md)
  - [コンフィグ](Doc/module_UART/INDEX.md#コンフィグ)
    - [CONFIG_DISABLE_MODULE_UART](Doc/module_UART/INDEX.md#CONFIG_DISABLE_MODULE_UART)
    - [CONFIG_USE_HALF_CALLBACK_UART](Doc/module_UART/INDEX.md#CONFIG_USE_HALF_CALLBACK_UART)
  - [関数](Doc/module_UART/INDEX.md#関数)
    - [Transmit](Doc/module_UART/function/INDEX.md#transmit)
    - [Receive](Doc/module_UART/function/INDEX.md#receive)
    - [Callback](Doc/module_UART/function/INDEX.md#callback)
  - [クラス](Doc/module_UART/INDEX.md#クラス)
    - [UART](Doc/module_UART/class/UART.md)
    - [UART_IT](Doc/module_UART/class/UART_IT.md)
    - [UART_DMA](Doc/module_UART/class/UART_DMA.md)
    - [UART_Logger](Doc/module_UART/class/UART_Logger.md)
    - [UART_Logger_IT](Doc/module_UART/class/UART_Logger_IT.md)
- [I2C](Doc/module_I2C/INDEX.md)
  - [コンフィグ](Doc/module_I2C/INDEX.md#コンフィグ)
    - [CONFIG_DISABLE_MODULE_I2C](Doc/module_I2C/INDEX.md#config_disable_module_i2c)
  - [関数](Doc/module_I2C/INDEX.md#関数)
    - [MasterTransmit](Doc/module_I2C/function/INDEX.md#mastertransmit)
    - [MasterReceive](Doc/module_I2C/function/INDEX.md#masterreceive)
    - [SlaveTransmit](Doc/module_I2C/function/INDEX.md#slavetransmit)
    - [SlaveReceive](Doc/module_I2C/function/INDEX.md#slavereceive)
    - [Callback](Doc/module_I2C/function/INDEX.md#callback)
  - [クラス](Doc/module_I2C/INDEX.md#クラス)
    - [I2C_Master](Doc/module_I2C/class/I2C_Master.md)
    - [I2C_Master_IT](Doc/module_I2C/class/I2C_Master_IT.md)
    - [I2C_Master_DMA](Doc/module_I2C/class/I2C_Master_DMA.md)
    - [I2C_Slave](Doc/module_I2C/class/I2C_Slave.md)
    - [I2C_Slave_IT](Doc/module_I2C/class/I2C_Slave_IT.md)
    - [I2C_Slave_DMA](Doc/module_I2C/class/I2C_Slave_DMA.md)
- [TIM](Doc/module_TIM/INDEX.md)
  - [コンフィグ](Doc/module_TIM/INDEX.md#コンフィグ)
    - [CONFIG_DISABLE_MODULE_TIM](Doc/module_TIM/INDEX.md#config_disable_module_tim)
  - [関数](Doc/module_TIM/INDEX.md#関数)
    - [Callback](Doc/module_TIM/function/INDEX.md#callback)
  - [クラス](Doc/module_TIM/INDEX.md#クラス)
    - [PWM](Doc/module_TIM/class/PWM.md)
    - [Motor](Doc/module_TIM/class/Motor.md)
    - [Encoder](Doc/module_TIM/class/Encoder.md)
    - [TimerInterrupt](Doc/module_TIM/class/TimerInterrupt.md)
- [ADC](Doc/module_ADC/INDEX.md)
  - [コンフィグ](Doc/module_ADC/INDEX.md#コンフィグ)
    - [CONFIG_DISABLE_MODULE_ADC](Doc/module_ADC/INDEX.md#config_disable_module_adc)
    - [CONFIG_USE_HALF_CALLBACK_ADC](Doc/module_ADC/INDEX.md#config_use_half_callback_adc)
  - [クラス](Doc/module_ADC/INDEX.md#クラス)
    - [ADC_DMA](Doc/module_ADC/class/ADC_DMA.md)
- [WDG](Doc/module_WDG/INDEX.md)
  - [クラス](Doc/module_WDG/INDEX.md#クラス)
    - [IWDG_Manager](Doc/module_WDG/class/IWDG_Manager.md)
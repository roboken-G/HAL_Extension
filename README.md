# HAL_Extension - 5.0.0 dev

```c++
#include "HAL_Extension.hpp
```

```c++
namespace halex
```

## 目次

- [Util](Doc/module_Util/INDEX.md)
  - [クラス](Doc/module_Util/INDEX.md#クラス)
    - [TimerCounter](Doc/module_Util/class/TimerCounter.md)
  - [関数](Doc/module_Util/INDEX.md#関数)
    - [map_contains](Doc/module_Util/function/map.md#map_containsconst-stdmapk-v-const-k)
- [GPIO](Doc/module_GPIO/INDEX.md)
  - [コンフィグ](Doc/module_GPIO/INDEX.md#コンフィグ)
    - [CONFIG_DISABLE_MODULE_GPIO](Doc/module_GPIO#CONFIG_DISABLE_MODULE_GPIO)
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
- [WDG](Doc/module_WDG/INDEX.md)
  - [クラス](Doc/module_WDG/INDEX.md#クラス)
    - [IWDG_Manager](Doc/module_WDG/class/IWDG_Manager.md)
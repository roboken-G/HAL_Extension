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
    - [gpioRead](Doc/module_GPIO/function/INDEX.md#gpioread)
    - [gpioWrite](Doc/module_GPIO/function/INDEX.md#gpiowrite)
    - [gpioToggle](Doc/module_GPIO/function/INDEX.md#gpiotoggle)
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
    - [uartTransmit](Doc/module_UART/function/INDEX.md#uarttransmit)
    - [uartTransmit_IT](Doc/module_UART/function/INDEX.md#uarttransmit_it)
    - [uartTransmit_DMA](Doc/module_UART/function/INDEX.md#uarttransmit_dma)
    - [uartReceive](Doc/module_UART/function/INDEX.md#uartreceive)
    - [uartReceive_IT](Doc/module_UART/function/INDEX.md#uartreceive_it)
    - [uartReceive_DMA](Doc/module_UART/function/INDEX.md#uartreceive_dma)
    - [setUARTTxCallback](Doc/module_UART/function/INDEX.md#setuarttxcallbackuart_handletypedef-stdfunctionvoid)
    - [setUARTRxCallback](Doc/module_UART/function/INDEX.md#setuartrxcallbackuart_handletypedef-stdfunctionvoid)
    - [setErrorCallback](Doc/module_UART/function/INDEX.md#setuarterrorcallbackuart_handletypedef-stdfunctionvoid)
  - [クラス](Doc/module_UART/INDEX.md#クラス)
    - [UART](Doc/module_UART/class/UART.md)
    - [UART_IT](Doc/module_UART/class/UART_IT.md)
    - [UART_DMA](Doc/module_UART/class/UART_DMA.md)
    - [UART_Logger](Doc/module_UART/class/UART_Logger.md)
- [WDG](Doc/module_WDG/INDEX.md)
  - [IWDG_Manager](Doc/module_WDG/class/IWDG_Manager.md)
    - [CubeMX](Doc/module_WDG/class/IWDG_Manager.md#cubemx)
    - [定数](Doc/module_WDG/class/IWDG_Manager.md#定数)
      - [minTimeOut](Doc/module_WDG/class/IWDG_Manager.md#iwg_managermintimeout)
      - [maxTimeOut](Doc/module_WDG/class/IWDG_Manager.md#iwdg_managermaxtimeout)
    - [列挙クラス](Doc/module_WDG/class/IWDG_Manager.md#列挙クラス)
      - [TimeUnit](Doc/module_WDG/class/IWDG_Manager.md#iwdg_managertimeunit)
    - [コンストラクタ](Doc/module_WDG/class/IWDG_Manager.md#コンストラクタ)
      - [IWDG_Manager(float, TimeUnit)](Doc/module_WDG/class/IWDG_Manager.md#iwdg_manageriwdg_managerfloat-timeunit)
    - [関数](Doc/module_WDG/class/IWDG_Manager.md#関数)
      - [available()](Doc/module_WDG/class/IWDG_Manager.md#iwdg_manageravailable)
      - [init()](Doc/module_WDG/class/IWDG_Manager.md#iwdg_managerinit)
      - [refresh()](Doc/module_WDG/class/IWDG_Manager.md#iwdg_managerrefresh)

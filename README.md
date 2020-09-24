# HAL_Extension - 5.0.0 dev

```c++
#include "HAL_Extension.hpp
```

## 目次

- [Util](#module-util)
  - 関数
    - [map_contains](#map_containsconst-stdmapk-v-const-k)
- [GPIO](#module-gpio)
  - コンフィグ
  - クラス
    - [GPIO](#gpio)
    - [DIPSwitch](#dipswitch)

## module Util

### ○ 関数
###### map_contains(const std::map<K, V>&, const K&)
> ```c++
> template <class K, class V>
> constexpr bool map_contains(const std::map<K, V> &map, const K &key)
> ```
> map に key が存在するかを返します


## module GPIO

### ○ コンフィグ
> ```
> CONFIG_DISABLE_MODULE_GPIO
> ```
> GPIO モジュールの無効化

### ○ クラス

#### ▷ GPIO

##### ・ CubeMX
```yaml
PinOut: GPIO_Input / GPIO_Output
```

##### ・ コンストラクタ
###### GPIO(GPIO_TypeDef*, uint16_t)
> ```c++
> GPIO(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin);
> ```
> Read / Write をするピンを設定します  
> ```c++
> // 例
> GPIO pa5(GPIOA, GPIO_PIN_5);
> ```

##### ・ 関数
###### GPIO::read()
> ```c++
> GPIO_PinState read() const noexcept;
> ```
> `HAL_GPIO_ReadPin()` の結果を返します  
> ```c++
> // 例
> pa5.read();
> ```

###### GPIO::isSet()
> ```c++
> GPIO_PinState isSet() const noexcept;
> ```
> `GPIO::read()` の結果が `GPIO_PIN_SET` であれば `true` を返します 
> ```c++
> // 例
> pa5.isSet();
> ```

###### GPIO::isReset()
> ```c++
> GPIO_PinState isReset() const noexcept;
> ```
> `GPIO::read()` の結果が `GPIO_PIN_RESET` であれば `true` を返します 
> ```c++
> // 例
> pa5.isReset();
> ```

###### GPIO::write(GPIO_PinState)
> ```c++
> void write(GPIO_PinState PinState) const noexcept;
> ```
> `HAL_GPIO_WritePin()` を実行します  
> ```c++
> // 例
> pa5.write(GPIO_PIN_SET);
> pa5.write(GPIO_PIN_RESET);
> ```

###### GPIO::set()
> ```c++
> void set() const noexcept;
> ```
> `GPIO::write(GPIO_PIN_SET)` を実行します  
> ```c++
> // 例
> pa5.set();
> ```

###### GPIO::reset()
> ```c++
> void reset() const noexcept;
> ```
> `GPIO::write(GPIO_PIN_RESET)` を実行します  
> ```c++
> // 例
> pa5.reset();
> ```

###### GPIO::toggle()
> ```c++
> void toggle() const noexcept;
> ```
> `HAL_GPIO_TogglePin()` を実行します  
> ```c++
> // 例
> pa5.toggle();
> ```

#### ▷ DIPSwitch

##### ・ CubeMX
```yml
PinOut: GPIO_Input
```

##### ・ コンストラクタ
> ###### DIPSwitch(bool)
> ```c++
> DIPSwitch(bool flip = false);
> ```
> `flip: true` で `DIPSwitch::getAddress()` で  
> 全ビット反転された結果が出力されます
> ```c++
> // 例
> DIPSwitch dip;
> DIPSwitch dip(true);
> ```

##### ● 関数
> ###### DIPSwitch::add(GPIO)
> ```c++
> DIPSwitch& add(GPIO gpio) noexcept;
> ```
> スイッチのピンを追加します  
> 最大登録数は8つです  
> ```c++
> // 例
> dip.add(pa5)
>    .add(pa6) // 以下省略
> ```

> ##### DIPSwitch::add(GPIO_TypeDef*, uint16_t)
> ```c++
> DIPSwitch& add(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin) noexcept;
> ```
> `DIPSwitch::add(GPIO)` の結果を返します  
> ```c++
> // 例
> dip.add(GPIOA, GPIO_PIN_5)
>    .add(GPIOA, GPIO_PIN_6) // 以下省略
> ```

> ##### DIPSwitch::getSize()
> ```c++
> uint8_t getSize() const noexcept;
> ```
> 追加済みのスイッチ数を取得します  
> ```c++
> // 例
> uint8_t size = dip.getSize();
> ```

> ##### DIPSwitch::getAddress()
> ```c++
> uint8_t getAddress() const noexcept;
> ```
> 追加したスイッチを使用してアドレスを取得します  
> ```c++
> // 例
> uint8_t address = dip.getAddress();
> ```
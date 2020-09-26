#ifndef HAL_EXTENSION_UART_IT_HPP
#define HAL_EXTENSION_UART_IT_HPP

#ifndef CONFIG_DISABLE_MODULE_UART

#include "usart.h"
#include "HAL_Extension_uart_callback.hpp"
#include "HAL_Extension_uart_function_transmit.hpp"
#include "HAL_Extension_uart_function_receive.hpp"

template<class T>
class UART_IT {
private:
    UART_HandleTypeDef *huart;
public:
    UART_IT(){}

    UART_IT(UART_HandleTypeDef &huart): huart(&huart){

    }

    HAL_StatusTypeDef transmit(const T &data) const noexcept {
        return uartTransmit_IT(huart, data);
    }

    HAL_StatusTypeDef receive(T &data) const noexcept {
        return uartReceive_IT(huart, data);
    }

#ifndef CONFIG_DISABLE_EX_CALLBACK
    void setTxCallback(std::function<void()> function) noexcept {
        setUARTTxCallback(huart, function);
    }

    void setRxCallback(std::function<void()> function) noexcept {
        setUARTRxCallback(huart, function);
    }

    void setErrorCallback(std::function<void()> function) noexcept {
        setErrorCallback(huart, function);
    }
#endif // CONFIG_DISABLE_EX_CALLBACK
};

#endif // CONFIG_DISABLE_MODULE_UART

#endif // HAL_EXTENSION_UART_IT_HPP

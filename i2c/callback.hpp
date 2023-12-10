#ifndef HAL_EXTENSION_I2C_CALLBACK_HPP
#define HAL_EXTENSION_I2C_CALLBACK_HPP

#ifndef CONFIG_DISABLE_MODULE_I2C

#include "i2c.h"
#include <functional>

namespace halex {

void setI2CMasterTxCallback(I2C_HandleTypeDef *hi2c, std::function<void()> function) noexcept;
void setI2CMasterRxCallback(I2C_HandleTypeDef *hi2c, std::function<void()> function) noexcept;
void setI2CSlaveTxCallback(I2C_HandleTypeDef *hi2c, std::function<void()> function) noexcept;
void setI2CSlaveRxCallback(I2C_HandleTypeDef *hi2c, std::function<void()> function) noexcept;
void setI2CErrorCallback(I2C_HandleTypeDef *hi2c, std::function<void()> function) noexcept;
void setI2CMasterTxCallback(I2C_HandleTypeDef &hi2c, std::function<void()> function) noexcept;
void setI2CMasterRxCallback(I2C_HandleTypeDef &hi2c, std::function<void()> function) noexcept;
void setI2CSlaveTxCallback(I2C_HandleTypeDef &hi2c, std::function<void()> function) noexcept;
void setI2CSlaveRxCallback(I2C_HandleTypeDef &hi2c, std::function<void()> function) noexcept;
void setI2CErrorCallback(I2C_HandleTypeDef &hi2c) noexcept;
void runI2CMasterTxCallback(I2C_HandleTypeDef *hi2c) noexcept;
void runI2CMasterRxCallback(I2C_HandleTypeDef *hi2c) noexcept;
void runI2CSlaveTxCallback(I2C_HandleTypeDef *hi2c) noexcept;
void runI2CSlaveRxCallback(I2C_HandleTypeDef *hi2c) noexcept;
void runI2CErrorCallback(I2C_HandleTypeDef *hi2c) noexcept;
void runI2CMasterTxCallback(I2C_HandleTypeDef &hi2c) noexcept;
void runI2CMasterRxCallback(I2C_HandleTypeDef &hi2c) noexcept;
void runI2CSlaveTxCallback(I2C_HandleTypeDef &hi2c) noexcept;
void runI2CSlaveRxCallback(I2C_HandleTypeDef &hi2c) noexcept;
void runI2CErrorCallback(I2C_HandleTypeDef &hi2c) noexcept;

} // namespace halex

#endif // CONFIG_DISABLE_MODULE_I2C

#endif // HAL_EXTENSION_I2C_CALLBACK_HPP

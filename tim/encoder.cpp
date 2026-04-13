#if __has_include("tim.h")

#include "tim/encoder.hpp"

namespace halex {

Encoder::Encoder() {}

Encoder::Encoder(TIM_HandleTypeDef *htim): htim(htim) {

}

Encoder::Encoder(TIM_HandleTypeDef &htim): Encoder(&htim) {

}

void Encoder::start() noexcept {
    __HAL_TIM_SET_COUNTER(htim , 0);
    lastRawCount = 0;
    rawCount = 0;
    HAL_TIM_Encoder_Start(htim, TIM_CHANNEL_ALL);
}

void Encoder::stop() noexcept {
    HAL_TIM_Encoder_Stop(htim, TIM_CHANNEL_ALL);
    __HAL_TIM_SET_COUNTER(htim , 0);
}

int32_t Encoder::update() noexcept {
    lastRawCount = rawCount;
    rawCount = htim->Instance->CNT;

    int16_t diff = static_cast<int16_t>(rawCount - lastRawCount);

    count += diff;
    return count;
}

int32_t Encoder::getCount() const noexcept {
    return count;
}

void Encoder::setCount(int32_t count) noexcept {
    this->count = count;
}

void Encoder::resetCount() noexcept {
    setCount(0);
}

} // namespace halex

#endif // __has_include

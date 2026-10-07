#include "pwm.h"
#include "stm32f103xb.h"

void pwm_init(uint8_t canal, uint32_t frec){
    switch (canal){
        RCC -> APB1ENR |= RCC_APB1ENR_TIM3EN;
        TIM3 -> CR1 &= ~ (TIM_CR1_CEN);
    
}
}


void pwm(uint8_t canal , uint8_t duty){

}
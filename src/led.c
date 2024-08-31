#include "stm32f401xe.h"

void clear_pa5() {
    GPIOA->BSRR = (GPIO_BSRR_BR5);
}

void set_pa5() {
    GPIOA->BSRR = (GPIO_BSRR_BS5);
}

void config_pa5_output(void) {
    // enable the clock to GPIOA
    RCC->AHB1ENR |= RCC_AHB1ENR_GPIOAEN;

    // configure GPIOA pin5 (A5) for output
    GPIOA->MODER &= ~(GPIO_MODER_MODE5);
    GPIOA->MODER |= GPIO_MODER_MODE5_0;
    
    // push-pull driver of GPIO pin A5
    GPIOA->OTYPER &= ~(GPIO_OTYPER_OT5);
}

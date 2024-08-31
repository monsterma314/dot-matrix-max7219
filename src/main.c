#include "stm32f401xe.h"
#include <stdlib.h>
#include "led.h"
#include <stdbool.h>

int main() {

    // configuration tasks
    config_pa5_output();

    while(true) {
        // toggle PA5
        for(volatile int i = 0; i < 1000000; i++);
        set_pa5();
        for(volatile int i = 0; i < 1000000; i++);
        clear_pa5();
        // asm("wfi");
    }

    return EXIT_SUCCESS;
}

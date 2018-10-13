#include <math.h>
#include "hal.h"


const unsigned int baudrate=9600;



void hal_rcc_init(void)
{  
    /* Enable ADC & SYSCFG clocks */
    //RCC_APB2PeriphClockCmd(RCC_APB2Periph_ADC1 | RCC_APB2Periph_SYSCFG , ENABLE);

    /* NVIC_PriorityGroup_4: 4 bits for pre-emption priority, 0 bits for subpriority */
    NVIC_PriorityGroupConfig(NVIC_PriorityGroup_4);
}


void hal_debug_init(void)
{
}

 
int hal_init(void)
{
    hal_wdg_init();
    hal_rcc_init();
    hal_debug_init();
    hal_gpio_init();
    hal_led_init();
    hal_beep_init();
#if USE_CMD_SGPIO
    hal_sgpio_init();
#endif
    if( !hal_uart_init(baudrate) )
        return 0;
    return 1;
}




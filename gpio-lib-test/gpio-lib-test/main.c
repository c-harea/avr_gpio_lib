#include "gpio_lib/avr_gpio.h"

#define F_CPU 16000000L
#include <util/delay.h>

int main(void)
{
    Init_Port_Input(&PORTA);
	Set_Pin_Output(&PORTA, PORTA0);
	
	Set_Port(&PORTA);
	Reset_Pin(&PORTA, PORTA0);
	
	
    while (1) 
    {
		Toggle_Pin(&PORTA, PORTA0);
		_delay_ms(500);
    }
}

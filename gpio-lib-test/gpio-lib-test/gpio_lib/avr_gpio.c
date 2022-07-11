#include "avr_gpio.h"

void Init_Port_Output(volatile uint8_t* GPIO_PORT){
		
	*(GPIO_PORT - 1) = 0xff;
}

void Init_Port_Input(volatile uint8_t* GPIO_PORT){
	
	*(GPIO_PORT - 1) = 0x00;
}	
	
void Set_Port(volatile uint8_t* GPIO_PORT){
	
	*GPIO_PORT = 0xff;
}	
				
void Reset_Port(volatile uint8_t* GPIO_PORT){
	
	*GPIO_PORT = 0x00;
}	
			
void Set_Pin_Output(volatile uint8_t* GPIO_PORT, uint8_t pin){
	
	*(GPIO_PORT - 1) |= (1 << pin);
}

void Set_Pin_Input(volatile uint8_t* GPIO_PORT, uint8_t pin){
	
	*(GPIO_PORT - 1) &= ~(1 << pin);
}

void Set_Pin(volatile uint8_t* GPIO_PORT, uint8_t pin){
	
	*GPIO_PORT |= (1 << pin);
}	

void Reset_Pin(volatile uint8_t* GPIO_PORT, uint8_t pin){
	
	*GPIO_PORT &= ~(1 << pin);
}

void Toggle_Pin(volatile uint8_t* GPIO_PORT, uint8_t pin){
	
	*GPIO_PORT ^= (1 << pin);
}



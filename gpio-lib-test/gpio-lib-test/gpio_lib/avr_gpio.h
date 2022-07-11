

#ifndef AVR_GPIO_H_
#define AVR_GPIO_H_

#include <avr/io.h>

	void Init_Port_Input(volatile uint8_t*);			//	initialize port as input, takes as argument port alias or address [ex. Init_Port_Input(&PORTA)]
	void Init_Port_Output(volatile uint8_t*);			//	initialize port as output, takes as argument port alias or address [ex. Init_Port_Output(&PORTA)]
	void Set_Port(volatile uint8_t*);					//  set port pins to logical high, takes as argument port alias or address [ex. Set_Port(&PORTA)]
	void Reset_Port(volatile uint8_t*);					//  set port pins to logical low, takes as argument port alias or address [ex. Reset_Port(&PORTA)]
	void Set_Pin_Output(volatile uint8_t*, uint8_t);	//  set selected pin of a port as output, takes as argument port alias or address and pin number [ex. Set_Pin_Output(&PORTA, 0)]
	void Set_Pin_Input(volatile uint8_t*, uint8_t);		//  set selected pin of a port as input, takes as argument port alias or address and pin number [ex. Set_Pin_Input(&PORTA, 0)]
	void Set_Pin(volatile uint8_t*, uint8_t);			//  set selected pin of a port, takes as argument port alias or address and pin number [ex. Set_Pin(&PORTA, 0)]
	void Reset_Pin(volatile uint8_t*, uint8_t);			//  reset selected pin of a port, takes as argument port alias or address and pin number [ex. Reset_Pin(&PORTA, 0)]
	void Toggle_Pin(volatile uint8_t*, uint8_t);		//  toggle selected pin of a port, takes as argument port alias or address and pin number [ex. Reset_Pin(&PORTA, 0)]

#endif /* AVR_GPIO_H_ */
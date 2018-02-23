#ifndef TIMER4_H_
#define TIMER4_H_


#include "gpio.h"									//use gpio

//hardware configuration
//end hardware configuration

//global defines

//global variables

//reset timer0a - split timer
//16/32-bit timer: 8-bit prescaler, 16-bit period register
void tmr4a_init(uint32_t ps, uint32_t pr);

//activate the timera isr
void tmr4a_act(void (*isrptr)(void));

//reset timer0b - split timer
//16/32-bit timer: 8-bit prescaler, 16-bit period register
void tmr4b_init(uint32_t ps, uint32_t pr);

//activate the timerb isr
void tmr4b_act(void (*isrptr)(void));

#endif /* TIMER0_H_ */

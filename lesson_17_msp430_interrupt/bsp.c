#include <stdint.h>      /* standard integer types */
#include <msp430.h> /* MSP430 variant used */
#include "bsp.h"         /* Board Support Package */


void LED_toggle(void) {
    P1OUT ^= LED1;  /* toggle LED1 */
}

__attribute__((interrupt(TIMER0_A0_VECTOR))) void
Timer0_Handler(void) 
{
    LED_toggle();  /* toggle LED1 */
}

void Timer0_Function(void) {
    LED_toggle();  /* toggle LED1 */
}
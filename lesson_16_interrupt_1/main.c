#include "bsp.h"


int main()
{
	SYSCTL->RCGCGPIO |= (1U << 5); /* enable clock for GPIOF */
	SYSCTL->GPIOHBCTL |= (1U << 5); /* enable AHB for GPIOF */
	GPIOF_AHB->DIR = (LED_RED | LED_BLUE | LED_GREEN);
	GPIOF_AHB->DEN = (LED_RED | LED_BLUE | LED_GREEN);
	
	SysTick->LOAD = SYS_CLOCK_HZ/2U - 1U;
	SysTick->VAL = 0U;
	SysTick->CTRL = SysTick_CTRL_CLKSOURCE_Msk |
								  SysTick_CTRL_TICKINT_Msk |
							    SysTick_CTRL_ENABLE_Msk;
	
	
	// __enable_interrupt();
	// ^^^^^^^^^^^^^^^^^^^^^ no need to find Keil equivalent function as this seems to be enabled by default
	
	while (1)
	{
	}
	
}
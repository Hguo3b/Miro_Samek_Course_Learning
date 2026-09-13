#include "TM4C123.h"                    // Device header


#define LED_RED    (1U << 1)
#define LED_BLUE   (1U << 2)
#define LED_GREEN  (1U << 3)

void delay(void)
{
	int volatile counter = 0;
	while (counter < 1000000) 
	{
		++counter;
	}
}

int main() 
{
	SYSCTL->RCGCGPIO |= (1U << 5); /* enable clock for GPIOF */
	SYSCTL->GPIOHBCTL |= (1U << 5); /* enable AHB for GPIOF */
	GPIOF_AHB->DIR |= (LED_RED | LED_BLUE | LED_GREEN);
	GPIOF_AHB->DEN |= (LED_RED | LED_BLUE | LED_GREEN);

  *((uint32_t *)GPIOF_AHB+LED_BLUE) = LED_BLUE;
	while (1)
	{
		*((uint32_t *)GPIOF_AHB+LED_RED) = LED_RED;
		delay();
		
		*((uint32_t *)GPIOF_AHB+LED_RED) = 0;
		delay();
		
	}	
	return 0;
}
		




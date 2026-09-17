#include "bsp.h"

uint32_t volatile counter = 0;

void SysTick_Handler(void)
{
	counter += 1;
	if (counter < 1)
	{
		return;
	}
	counter = 0;
	*((uint32_t *)GPIOF_AHB+LED_RED) ^= LED_RED;
}
#include "bsp.h"

void SysTick_Handler(void)
{
	*((uint32_t *)GPIOF_AHB+LED_RED) ^= LED_RED;
}
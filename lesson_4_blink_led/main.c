int main()
{
	*((unsigned int *)0x400FE608U) = 0x20U;
	*((unsigned int *)0x40025400U) = 0xEU;
	*((unsigned int *)0x4002551CU) = 0xEU;
	
	int color_value = 0;
	while (1)
	{
		int counter = 0;
		while (counter < 1000000)
		{
			++counter;
		}
		
		++color_value;
		if (color_value == 3)
		{
			color_value = 0;
		}
		
		if (color_value == 0)
		{
			*((unsigned int *)0x400253FC) = 0x2U;
		}
		else if (color_value == 1)
		{
			*((unsigned int *)0x400253FC) = 0x4U;
		}
		else if (color_value == 2)
		{
			*((unsigned int *)0x400253FC) = 0x8U;
		}
		
		
		counter = 0;
		while (counter < 1000000)
		{
			++counter;
		}
		
	}
	
}
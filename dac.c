#include "main.h"

const int Sine12bit[32] = {
	2047, 2447, 2831, 3185, 3498, 3750, 3939, 4056, 4095, 4056,
	3939, 3750, 3495, 3185, 2831, 2447, 2047, 1647, 1263, 909, 
	599, 344, 155, 38, 0, 38, 155, 344, 599, 909, 1263, 1647};

// AnalogOut aout1(PA4);
AnalogOut aout1(PA5);

int main(void)
{
	int i;
	
	Systick_Init();
	
  while (1)
  {
		for(i = 0; i < 32; i++)
		{
			aout1 = Sine12bit[i];
			Delay(1);
		}
  }
}

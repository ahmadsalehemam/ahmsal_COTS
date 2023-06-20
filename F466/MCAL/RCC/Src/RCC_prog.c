#include <stdint.h>
#include "Stm32f446RE.h"
#include <stdint.h>

#include "RCC_interface.h"

void RCC_voidAHB1EnablePeripheralClock(uint8_t peripheral)
{
	RCC-> AHB1ENR  |=(1<< peripheral);
	
	
	
	
}
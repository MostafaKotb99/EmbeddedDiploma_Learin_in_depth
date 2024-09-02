#include "uart.h"

#define UART0_DR	*(volatile unsigned int* const)((unsigned int*)0x101f1000) 

void UART_SendString(unsigned char* P_TxString)
{
	while(* P_TxString != '\0')
	{
		UART0_DR = (unsigned int)(*P_TxString);
		P_TxString++;
	}
	
	
}
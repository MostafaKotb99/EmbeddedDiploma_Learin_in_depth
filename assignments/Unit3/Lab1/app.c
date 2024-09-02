#include "uart.h"

unsigned char String_Buffer[100] = "Learn_In_Depth: Mostafa Kotb" ;
unsigned char const String_Buffer2[100] = "Learn_In_Depth: Mostafa Kotb" ;

void main(void)
{
	
	UART_SendString(String_Buffer);
	
}
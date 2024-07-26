/*
 * Ex7.c
 *
 *  Created on: Jul 26, 2024
 *      Author: mosta
 */

#include <stdio.h>

int main()
{
	int number , i;
	int factorial = 1;
	printf("Enter an integer: ");
	fflush(stdout);
	scanf("%d" , &number);

	if (number < 0)
		printf("\n ERROR!!! Factorial of negative number does not exist");
	else
	{
		for (i=1 ; i<=number ; ++i)
		{
			factorial *= i;
		}
		printf("\nFactorial %d = %d" , number , factorial);
	}
	return 0;

}

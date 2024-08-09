/*
 * Ex4.c
 *
 *  Created on: Aug 9, 2024
 *      Author: mosta
 */

#include <stdio.h>

int Power(int exp, int base)
{
	if (exp != 0)
		return (base*Power(exp-1 , base));
	else
		return 1;
}

int main()
{
	int exp, base;

	printf("Enter base number: ");
	fflush(stdout);
	scanf("%d" , &base);

	printf("\nEnter exponential number: ");
	fflush(stdout);
	scanf("%d" , &exp);

	printf("\n%d ^ %d = %d" , base , exp, Power(exp , base));
}

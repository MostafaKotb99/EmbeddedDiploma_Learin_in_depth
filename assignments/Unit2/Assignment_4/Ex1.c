/*
 * Ex1.c
 *
 *  Created on: Aug 5, 2024
 *      Author: mosta
 */
/*
#include <stdio.h>

void CheckPrimeNumbers(int n1, int n2)
{
	int i, j, flag;

	for (i = n1; i <= n2; i++)
	{
		if (i == 1 || i == 0)
			continue;

		flag = 1;

		for (j = 2; j <= i / 2; ++j)
		{
			if (i % j == 0)
			{
				flag = 0;
				break;
			}
		}

		if (flag == 1)
			printf("%d ", i);
	}
}

int main()
{
	int n1, n2;

	printf("Enter lower bound of the interval: ");
	fflush(stdout);
	scanf("%d", &n1);

	printf("Enter upper bound of the interval: ");
	fflush(stdout);
	scanf("%d", &n2);

	printf("Prime numbers between %d and %d are: ",n1, n2);
	fflush(stdout);

	CheckPrimeNumbers(n1 , n2);

	return 0;
}
*/

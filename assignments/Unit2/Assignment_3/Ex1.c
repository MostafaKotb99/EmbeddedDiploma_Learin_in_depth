/*
 * Ex1.c
 *
 *  Created on: Jul 30, 2024
 *      Author: mosta
 */
/*
#include <stdio.h>

int main()
{
	float a[2][2], b[2][2], c[2][2] ;
	int i, j;
	printf("Enter the elements of the 1st Matrix: ");
	fflush(stdout);
	for (i = 0 ; i<2 ; i++)
	{
		for (j=0 ; j<2 ; j++)
		{
			printf("\nEnter a %d%d: ", i+1, j+1);
			fflush(stdout);
			scanf("%f", &a[i][j]);
		}
	}
	fflush(stdout);
	printf("\nEnter the elements of the 2nd Matrix: ");
	for (i = 0 ; i<2 ; i++)
	{
		for (j=0 ; j<2 ; j++)
		{
			fflush(stdout);
			printf("\nEnter b %d%d: ", i+1, j+1);
			scanf("%f", &b[i][j]);
		}
	}

	for (i = 0 ; i<2 ; i++)
	{
		for (j=0 ; j<2 ; j++)
		{
			c[i][j] = a[i][j] + b[i][j];
		}
	}
	fflush(stdout);
	printf("\nSum of two Matrices: ");
	for (i = 0 ; i<2 ; i++)
	{
		for (j=0 ; j<2 ; j++)
		{
			fflush(stdout);
			printf("%.1f\t", c[i][j]);
			if(j==1)
				printf("\n");
		}
	}
}*/

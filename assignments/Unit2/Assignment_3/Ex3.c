/*
 * Ex3.c
 *
 *  Created on: Jul 30, 2024
 *      Author: mosta
 */
/*

#include <stdio.h>

int main()
{
	int row, coloumn, i, j;
	printf("Enter rows and column of matrix: ");
	fflush(stdout);
	scanf("%d %d", &row, &coloumn);
	int Matrix[row][coloumn];
	int Transpose[coloumn][row];
	printf("\nEnter Elements of Matrix: \n");
	fflush(stdout);


	for(i=0 ; i<row ; ++i)
	{
		for (j=0 ; j<coloumn ; ++j)
		{
			printf("\nEnter data of Matrix%d%d: " , i+1,j+1);
			fflush(stdout);
			scanf("%d" , &Matrix[i][j]);
		}
	}

	printf("\nEntered Matrix : \n");
	fflush(stdout);
	for(i=0 ; i<row ; ++i)
	{
		for (j=0 ; j<coloumn ; ++j)
		{
			printf("%d \t", Matrix[i][j]);
			fflush(stdout);

			if(j == coloumn -1)
				printf("\n");
		}
	}

	printf("\nTranspose of Matrix : \n");
	fflush(stdout);

	for(i=0 ; i<row ; ++i)
	{
		for (j=0 ; j<coloumn ; ++j)
		{
			Transpose[j][i] = Matrix[i][j];

		}
	}

	for(i=0 ; i<coloumn ; ++i)
	{
		for (j=0 ; j<row ; ++j)
		{
			printf("%d \t", Transpose[i][j] );
			if(j == row -1)
				printf("\n");
		}
	}
}
*/

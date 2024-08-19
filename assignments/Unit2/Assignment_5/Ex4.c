/*
 * Ex4.c
 *
 *  Created on: Aug 15, 2024
 *      Author: mosta
 */


#include <stdio.h>

#define SIZE	3

struct gStudent
{
	char name[50];
	int roll_num;
	float marks;
}S[SIZE];

int main()
{
	int i;

	printf("Enter Information of Students: ");
	fflush(stdout);

	for(i=0 ; i<SIZE ; i++)
	{
		printf("\nEnter name:");
		fflush(stdout);
		scanf("%s" , S[i].name);

		printf("Enter roll number:");
		fflush(stdout);
		scanf("%d" , &S[i].roll_num);

		printf("Enter marks:");
		fflush(stdout);
		scanf("%f" , &S[i].marks);
	}
	for(i=0 ; i<SIZE ; i++)
	{
		printf("\n Name: %s" , S[i].name);
		printf("\tRoll: %d" , S[i].roll_num);
		printf("\tMarks: %.2f" , S[i].marks);

	}

}


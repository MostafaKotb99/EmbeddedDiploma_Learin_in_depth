/*
 * Ex2.c
 *
 *  Created on: Aug 15, 2024
 *      Author: mosta
 */
/*
#include <stdio.h>

struct gDistances{
	int feet;
	float inch;
}D1, D2, Result;

int main()
{
	printf("Enter 1st distance\n");
	fflush(stdout);
	printf("Enter feet: ");
	fflush(stdout);
	scanf("%d", &D1.feet);
	printf("\nEnter inch: ");
	fflush(stdout);
	scanf("%f", &D1.inch);

	printf("Enter 2nd distance\n");
	fflush(stdout);
	printf("Enter feet: ");
	fflush(stdout);
	scanf("%d", &D2.feet);
	printf("\nEnter inch: ");
	fflush(stdout);
	scanf("%f", &D2.inch);

	Result.feet = D1.feet + D2.feet;
	Result.inch = D1.inch + D2.inch;

	// convert inches to feet if greater than 12
	while (Result.inch >= 12.0) {
		Result.inch = Result.inch - 12.0;
		++Result.feet;
	}
	printf("\nSum of distances = %d\'-%.1f\"", Result.feet, Result.inch);
	return 0;
}
*/

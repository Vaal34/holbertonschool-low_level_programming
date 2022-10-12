#include "main.h"
#include <stdio.h>
/**
 * print_array - that prints n elements of an array of integers
 *
 *@a: value of array
 *@n: the number of the array
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}

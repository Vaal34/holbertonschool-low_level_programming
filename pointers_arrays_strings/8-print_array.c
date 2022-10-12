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

	for (i = '\n'; i < n; i++)
	{
		if (i < n - 1)
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d", a[i]);
		}
	}
	printf("\n");
}

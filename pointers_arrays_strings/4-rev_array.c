#include "main.h"

/**
 * reverse_array - reverse an array of integer
 *@a: an array of integers
 *@n: the number of elements to swap
 *
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int tmp = 0;
	int g = 0;

	for (i = n - 1; i >= g; i--)
	{
		tmp = a[g];
		a[g] = a[i];
		a[i] = tmp;
		g++;
	}
}

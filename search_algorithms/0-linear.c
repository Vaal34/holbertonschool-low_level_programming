#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - the Linear search algorithm
 *@array: array of number
 *@size: size of array
 *@value: found this value
 *Return: the index
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (value <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			break;
	}
	if (array[i] != value)
		return (-1);
	return (i);
}

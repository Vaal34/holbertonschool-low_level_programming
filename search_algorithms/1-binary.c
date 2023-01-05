#include "search_algos.h"
#include <stdlib.h>
#include <math.h>
#include <stddef.h>
#include <stdio.h>

/**
 * binary_search - binary search algo
 * @array: pointer of array
 * @size: size of array
 * @value: value of element of array
 * Return: i or -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i = 0;
	size_t l = 0;
	size_t h = size - 1;
	size_t cut;

	printf("Searching in array: ");
	for (i = 0; i < h; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[h]);

	while (l < h)
	{
		cut = floor((l + h) / 2);

		if (value > array[cut])
		{
			l = cut + 1;
			printf("Searching in array: ");
			for (i = l; i < h; i++)
				printf("%d, ", array[i]);
			printf("%d\n", array[h]);
			continue;
		}
		else if (value < array[cut])
		{
			h = cut - 1;
			printf("Searching in array: ");
			for (i = l; i < h; i++)
				printf("%d, ", array[i]);
			printf("%d\n", array[h]);
			return (i);
		}
		else
			return (cut);
	}
	return (-1);
}

#include "main.h"
#include <stdlib.h>

/**
 * array_range -  function that allocates memory for an array, using malloc
 * @min: min
 * @max: max
 * Return: the new pointers
 */

int *array_range(int min, int max)
{
	int *p;
	int i;

	if (min > max)
		return (NULL);


	p = malloc(sizeof(int) * (max - min + 1));
		if (p == 0)
			return (NULL);
		for (i = 0; i < max + 1; i++)
		{
		p[i] = i;
		}
		return (p);
}

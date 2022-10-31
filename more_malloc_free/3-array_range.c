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
	int s, i;
	int *p;

	s = max - min + 1;

	if (s <= 0)
		return (0);

	p = malloc(s * sizeof(int));
	if (p == 0)
	{
		return (0);
	}

	for (i = 0 ; i != s ; i++)
	{
		p[i] = min + i;
	}

	return (p);
}

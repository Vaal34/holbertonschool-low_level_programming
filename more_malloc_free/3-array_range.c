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
	int i, s;

	s = max - min + 1;
		return (NULL);

	p = malloc(sizeof(int) * s);
	if (p == 0)
	{
		return (NULL);
	}
	for (i = 0 ; i != s ; i++)
	{
		p[i] = min + i;
	}
	return (p);

}

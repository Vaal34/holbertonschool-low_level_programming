#include "main.h"
#include <stdlib.h>

/**
 * array_range -  function that allocates memory for an array, using malloc
 * @min: min
 *

int *array_range(int min, int max)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (0);
	}
	p = malloc(nmemb * size);
	if (p == 0)
	{
		return (0);
	}
	for (i = 0; i != nmemb * size; i++)
	{
		p[i] = 0;
	}
	return (p);
}

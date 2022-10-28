#include "main.h"
#include <stdlib.h>

/**
 * _calloc -  function that allocates memory for an array, using malloc
 * @nmemb: number of element
 * @size: Length in bytes of each element
 * Return: the new pointers
 */

void *_calloc(unsigned int nmemb, unsigned int size)
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
		return (NULL);
	}
	for (i = 0; i != nmemb * size; i++)
	{
		p[i] = 0;
	}
	return (p);
}

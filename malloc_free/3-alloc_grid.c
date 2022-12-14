#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 *@width: the lenght of array
 *@height: the lenght of array
 *Return: a pointers
 */

int **alloc_grid(int width, int height)
{
	int y, i;
	int **p;

	if (width <= 0 && height <= 0)
	{
		return (NULL);
	}

	p = malloc(sizeof(int *) * height);
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		p[i] = malloc(sizeof(int) * width);
		if (p[i] == NULL)
		{
			for (; i >= 0; i--)
			{
				free(p[i]);
				p[i] = NULL;
			}
			free(p);
			p = NULL;
		}
		{
			for (y = 0; y < height; y++)
			{
				p[i][y] = 0;
			}
		}
	}
	return (p);
}


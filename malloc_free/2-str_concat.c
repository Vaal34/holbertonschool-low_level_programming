#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concat 2 strings in a new pointers
 *@s1: string 1
 *@s2: string 2
 *Return: a pointers
 */

char *str_concat(char *s1, char *s2)
{
	int x, y, a, b, size;
	char *p;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (a = 0; s1[a] != '\0'; a++)
	{
	}
	for (b = 0; s2[b] != '\0'; b++)
	{
	}
	size = a + b;

	p = malloc(sizeof(char) * size + 1);
	if (p == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < a; x++)
	{
		p[x] = s1[x];
	}
	for (y = 0; y < b; y++)
	{
		p[x + y] = s2[y];
	}
	p[x + y] = '\0';
	return (p);
}

#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: String 1
 * @s2: String 2
 * @n: the lenght of the string 2
 * Return: pointers
 */


char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int x, a, size;
	unsigned int b, y;
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
	for (b = 0; b < n; b++)
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

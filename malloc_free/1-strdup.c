#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 *@str: size of arrays
 *Return: Always 0
 */

char *_strdup(char *str)
{
	int i = 0;
	int size = 0;
	char *p;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		size++;
	}
	p = malloc((sizeof(char) * size) + 1);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		p[i] = str[i];
	}
	p[i] = '\0';
	return (p);
}

#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 *@size: size of arrays
 *@c: a character
 *Return: Always 0
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *cp;

	cp = malloc(sizeof(char) * size);
	if (cp == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		cp[i] = c;
	}
	return (cp);
}

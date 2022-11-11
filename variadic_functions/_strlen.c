#include "variadic_functions.h"

/**
 * _strlen - counter
 * @s: string
 *Return: lenght of string
 */

int _strlen(char *s)
{
	int i, c;

	while (s[i] != '\0')
	{
		i++;
		c++;
	}
	return (c);
}

#include "main.h"

/**
 * _strlen - count number of letters in the string
 *
 *@s: the string
 *
 * Return: C for count the strings
 */

int _strlen(char *s)
{
	int c = 0;

	while (*s != 0)
	{
		s++;
		c++;
	}
	return (c);
}


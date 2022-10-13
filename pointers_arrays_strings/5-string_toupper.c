#include "main.h"

/**
 * string_toupper - all lowercase tr uppercase
 *@c: the pointer of the strings
 *
 *Return: return the string
 */

char *string_toupper(char *c)
{
	int i = 0;

		while (c[i] != '\0')
		{
			if (c[i] >= 'a' && c[i] <= 'z')
			{
				c[i] = c[i] - 32;
			}
			i++;
		}
	return (c);
}

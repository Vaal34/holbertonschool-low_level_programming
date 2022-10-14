#include "main.h"

/**
 * string_toupper - all lowercase tr uppercase
 *@c: the pointer of the strings
 *
 *Return: return the string
 */

char *cap_string(char *c)
{
	int i = 0;

		while (c[i] != '\0')
		{
			if (c[i] == ' ')
			{
				i++;
				c[i] = c[i] + 34;
			}
			i++;
		}

	return (c);
}

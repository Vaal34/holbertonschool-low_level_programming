#include "main.h"

/**
 * string_toupper - all lowercase tr uppercase
 *@c: the pointer of the strings
 *
 *Return: return the string
 */

char *cap_string(char *n)
{
	int i = 0;
	int x = 0;
	char c[] = {',', ';', '.', '!', '?'
		, '"', '(', ')', '{', '}', ' ', '\n', '\t'};

	
	if  (n[0] >= 'a' && n[0] <= 'z')
		n[0] -= 32;

	for (i = 0; n[i] != '\0'; i++)
	{
		for (x = 0; c[x] != '\0'; x++)
		{
			if (n[i] == c[x] && n[i + 1] != '\0')
			{
				if (n[i + 1] >= 'a' && n[i + 1] != '\0')
				n[i + 1] = (n[i + 1] - 32);
			}
		}
	}
	return (n);
}

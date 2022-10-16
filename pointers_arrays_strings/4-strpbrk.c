#include "main.h"
/**
  * _strpbrk -  searches a string for any of a set of bytes
  *@s: the string
  *@accept: the string compared to @s
  *Return: s if the s == accept else 0
  */

char *_strpbrk(char *s, char *accept)
{
	int c = 0;

	while (*s != '\0')
	{
		for (c = 0; accept[c] != '\0'; c++)
		{
			{
				if (*s == accept[c])
					return (s);
			}
		}
		s++;
	}
	return (0);
}

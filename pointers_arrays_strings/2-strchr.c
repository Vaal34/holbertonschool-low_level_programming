#include "main.h"

/**
  * _strchr - locates a character in a string
  *@s: the string
  *@c: a character
  *Return: if the string donsn't locate the character return 0
  *if locates return the part after the character located
  */

char *_strchr(char *s, char c)
{
	char *p = s;
	int i = 0;

	while (*s != c && *s != '\0')
	{
		i++;
		s++;
	}
	if (*s == c)
	{
		return (p + i);
	}
	else
	{
		return (0);
	}
}

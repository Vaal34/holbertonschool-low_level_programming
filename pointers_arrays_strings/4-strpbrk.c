#include "main.h"

char *_strpbrk(char *s, char *accept)
{
	int i;
	char *p = s;

	while (*s != *accept && *s != '\0')
	{
		accept++;
		i++;
	}
	if (*s == *accept)
	{
		return (p + 2);
	}
	else 
	{
		return (0);
	}
}

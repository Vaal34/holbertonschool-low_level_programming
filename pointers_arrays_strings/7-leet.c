#include "main.h"

/**
  * leet - encodes a string into 1337
  *@c: pointer
  *Return: the string
  */

char *leet(char *c)
{
	int i, y;

	char n[] = {'4', '3', '0', '7', '1'};
	char r[] = {'a', 'A', 'e', 'E', 'o', 'O',
		't', 'T', 'l', 'L'};

	for (i = 0; c[i] != '\0'; i++)
	{
		for (y = 0; y < 10; y++)
		{
			if (c[i] == r[y])
			{
				c[i] = n[y / 2];
			}


		}
	}
	return (c);
}

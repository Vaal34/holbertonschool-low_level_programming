#include "main.h"

/**
  * leet - encodes a string into 1337.
  *@c: pointer
  *Return : the string
  */

char *leet(char *c)
{
	int i, y;

	int n[] = {'4', '3', '0', '7', '1'};
	int r[] = {'a', 'A', 'e', 'E', 'o', 'O', 
		't', 'T', 'l', 'L'};

	for (i = 0; c[i] != '\0'; i++)
	{
		for (y = 0; y < 10; y++)
		{
			if (c[i] == r[i])
			{
				c[i] = n[y / 2];
				break;
			}


		}
	}
	return (c);
}

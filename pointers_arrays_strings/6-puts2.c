#include "main.h"
#include <stdio.h>
/**
 * puts2 - print the string one on two
 *
 *@str: the string
 *
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		else
		{
		
		}
		i++;
	}
	_putchar('\n');
}

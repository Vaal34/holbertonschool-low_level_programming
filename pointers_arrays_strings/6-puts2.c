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
	while (*str != '\0')
	{
		if (*str % 2 == 0)
		{
			_putchar(*str);
			str+= 2;
		}
		else
		{
			_putchar(*str);
			str++;
		}
	}
	_putchar('\n');
}

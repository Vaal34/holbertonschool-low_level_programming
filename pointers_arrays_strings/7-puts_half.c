#include "main.h"
#include <stdio.h>
/**
 * puts_half - print the the last part of the string
 *
 *@str: the string
 *
 */

void puts_half(char *str)
{
	int i;  

	for (i = 0; str[i] != 0; i++)
	{
		_putchar(str[i]);			
	}
	_putchar('\n');
}

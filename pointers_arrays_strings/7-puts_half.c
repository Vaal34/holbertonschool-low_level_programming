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
	int c = 0;
	int i = 0;
	
	while (str[i])
	{
		i++;/* number of array */
		c++;/* number of loops */
	}
		i = ((c - 1) / 2);
	while (str[i])
	{
		i++;
		_putchar(str[i]);
	}
	_putchar('\n');
}

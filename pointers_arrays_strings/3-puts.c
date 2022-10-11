#include "main.h"
#include <stdio.h>
/**
 * _puts - print the string
 *
 *@str: the string
 *
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

#include "main.h"
#include <stdio.h>
/**
 * _strlen - count number of letters in the string
 *
 *@s: the string
 *
 * Return: C for count the strings
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

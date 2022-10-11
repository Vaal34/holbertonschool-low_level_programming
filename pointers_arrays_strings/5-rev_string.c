#include "main.h"
#include <stdio.h>
/**
 * print_rev - reverse the string
 *
 *@s: the string
 *
 */

void rev_string(char *s)
{
	int i = 0;

	while (s[i] != 0)
	{
		i++;
	}
	for (i = i - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}



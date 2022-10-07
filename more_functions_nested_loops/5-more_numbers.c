#include "main.h"

/**
* more_numbers - print numbers 10 times
**/

void more_numbers(void)
{
int n = 0;
int r = 0;

for (r = 0; r <= 9; r++)
{
	for (n = 0; n <= 14; n++)
	{
		if (n >= 10)
	{
		_putchar((n / 10) + '0');
	}
		_putchar((n % 10) + '0');
	}
	_putchar('\n');
}
}

#include "main.h"
/**
* main - check the code
*
* Return: Always 0.
*
* Description:  A column of asterisks on the left side,
* with beginning and ending almost-blank lines.
*/

void print_alphabet(void)
{
char i = 'a';
while (i <= 'z')
	{
	_putchar(i);
	i++;
	}
_putchar('\n');
}


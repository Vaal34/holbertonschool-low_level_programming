#include "main.h"
/**
* print_alphabet - check the code
*
* Return: On success 1. 
*
* Description:  A column of asterisks on the left side
*, with beginning and ending almost-blank lines.
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


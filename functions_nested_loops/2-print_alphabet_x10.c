#include "main.h"

/**
* print_alphabet_x10 - check the code
*
* Return: On success 1.
*
* Description:  A column of asterisks on the left side
*, with beginning and ending almost-blank lines.
*/

void print_alphabet_x10(void)
{	
	int n;
	char ch;
	for (n = 0; n <= 10; n++)
		{
		for (ch = 'a'; ch <= 'z'; ch++)
	 		{
			_putchar(ch);
			}
		_putchar('\n');
		}
}

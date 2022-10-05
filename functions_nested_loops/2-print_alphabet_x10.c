#include "main.h"

/**
* print_alphabet - check the code
*
* Return: On success 1.
*
* Description:  A column of asterisks on the left side
*, with beginning and ending almost-blank lines.
*/

void print_alphabet_X10(void)
{
int x = 1;
	while (x != 10)  
	_putchar(x);
	x++;
		{	
		char ch = 'a';	
			while (ch <= 'z')
				{
				_putchar(ch);
				ch++;
				}
		_putchar('\n');
		
		}		
}	
	

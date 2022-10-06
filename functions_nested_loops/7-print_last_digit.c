#include "main.h"

/**
*_isalpha - check the code
*@c: the character to check
*Return: 1 if c is lowercase, 0 otherwise
*/

int print_last_digit(int n)
{
int derNum = 0;
int p;

if (n >= 0)
{
	derNum = n % 10;
	p = derNum;
derNum = derNum + '0';
_putchar(derNum);
return (p);
}
else
{
	derNum = ((n % -10) * -1);
	p = derNum;
derNum = derNum + '0';
_putchar(derNum);
return (p);
}
}

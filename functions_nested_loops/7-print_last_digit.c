#include "main.h"

/**
* print_last_digit - print the last digit
* @n: the value to check
* Return: Always 0 (Success).
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

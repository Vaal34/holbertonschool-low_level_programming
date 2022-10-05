#include "main.h"

/**
* main - check the code
*
* Return: Always 0.
*
* Description:  A column of asterisks on the left side,
* with beginning and ending almost-blank lines.
*/

int main(void)
{
char ch[] = "_putchar";
int i =5;

while (ch[i] != '\0')
	{
	_putchar(ch[i]);
	i++;
	}
	_putchar('\n');
return (0);
}

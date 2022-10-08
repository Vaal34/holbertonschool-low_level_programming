#include "main.h"
/**
 * print_line - print a straight line
 * @n: to check
 */
void print_diagonal(int n)
{
	int t;
	char ch = '\\';
	char esp = ' ';

	for (t = 0; t < n; t++)
	{
		_putchar(esp);
	}
	_putchar(ch);
	_putchar('\n');
}

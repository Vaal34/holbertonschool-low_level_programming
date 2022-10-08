#include "main.h"
/**
 * print_line - print a straight line
 * @n: to check
 */
void print_diagonal(int n)
{
	int t = 0;
	int u = 0;
	char ch = '\\';
	char esp = '.';


	if (n <= 0)
	{
		_putchar('\n');
	}
	for (t = 0; t < n; t++)
	{
		while (u > n)
		{
			t = u;
			_putchar(esp);
			_putchar(ch);
		}
		t++;
		_putchar('\n');
	}
}

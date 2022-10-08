#include "main.h"
/**
 * print_line - print a straight line
 * @n: to check
 */
void print_diagonal(int n)
{
	int t = 0;
	char ch = '\\';
	char esp = '.';

	while (t < n)
	{
		for (t = 0; t < n; t++)
			_putchar('\n');
		{
			if ('\n')
			{
				_putchar(esp);
				_putchar(ch);
			}
		}
	}
}

#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: to check
 */
void print_diagonal(int n)
{
	int r = 0; 
	int l = 0;
	int slash = '\\';
	int esp =  ' ';

	if (n <= 0)
	{
		_putchar('\n');
	}
		for (r = 0; r < n; r++)
		{
			l = r;
			while (l > 0)
			{
				_putchar(esp);
				l--;
			}

			_putchar(slash);
			_putchar('\n');
		}
}

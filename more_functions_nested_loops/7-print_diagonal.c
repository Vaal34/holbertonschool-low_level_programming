#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: to check
 */
void print_diagonal(int n)
{
	int r = 0; /* nbr of loop turns */
	int l = 0;
	int s = '\\';
	int e =  ' ';

	if (n <= 0)
	{
		_putchar('\n');
	}
		for (r = 0; r < n; r++)
		{
			l = r;
			while (l > 0)
			{
				_putchar(e);
				l--;
			}

			_putchar(s);
			_putchar('\n');
		}
}

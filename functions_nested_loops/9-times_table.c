#include "main.h"

void times_table(void)
{

	int v = 0;
	int h = 0;

	for (h = 0; h <= 9; h++)
	{
		for (v = 0; v <= 9; v++)
		{
			if (v <= 9)
			{
				_putchar((v *3) +'0');
				_putchar(',');
				_putchar(' ');
			}
			else
			{
			_putchar(((v *3) + '0') / 10);
			_putchar(((v *3) + '0') % 10);
			_putchar(',');
			_putchar(' ');
			}
		}
		_putchar(h);
		_putchar('\n');
	}
	_putchar('\n');
}	

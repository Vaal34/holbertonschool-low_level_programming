#include "main.h"

void print_square(int size)
{

	int r = 0;
	int l = 0;
	char ch = '#';
		
		if (size <= 0)
		{
			_putchar('\n');
		}
		for (l = 0; l <= size; l++)
		{	
			for (r = 0; r < size; r++)
			{
				_putchar(ch);
			}
			_putchar('\n');
			}
}


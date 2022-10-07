#include "main.h"

/**
 * jack_bauer - print the last digit
 * return: Always 0.
 **/

void print_to_98(int n)
{
	if (n != 98)
	{
		for (n = n; n <= 98; n++)
		{
		putchar((n / 10) + '0');
		putchar((n % 10) + '0');  
		}          
		return (0);
	}
}

#include "main.h"

/**
 * jack_bauer - print the last digit
 * return: Always 0.
 **/

void jack_bauer(void)
{
	int m = 0;
	int h = 0;

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			putchar((h / 10) + '0');
			putchar((h % 10) + '0');
			putchar(':');
			putchar((m / 10) + '0');
			putchar((m % 10) + '0');
			putchar('\n');
		}
	}
}

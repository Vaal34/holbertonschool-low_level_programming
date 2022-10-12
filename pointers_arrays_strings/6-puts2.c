#include "main.h"
#include <stdio.h>
/**
 * puts2 - print the string one on two
 *
 *@str: the string
 *
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0' ) //while the string is not '\0', i print
	{
		if (i % 2 == 0) //if the array is a even, i print
		{
			_putchar(str[i]);
		}
		else //else i dont print
		{

		}
		i++; //so i run the loops
	}
	_putchar('\n');
}

#include "main.h"

/**
 * factorial - print the number of letter in the string with recursive
 *@n: number
 *Return: the lengh of the string
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	else
		return (n * factorial(n - 1));
}


#include "main.h"

/**
 * _square - to return the natural square root of a number
 * @c: counter
 * @num: number
 * Return: power recusive
 */
int _square(int c, int num)
{
	if (c < num)
	{
		if (num % c == 0)
		{
			return (0);
		}
		else
		{
			return (_square(c + 1, num));
		}
	}
	return (1);
}

/**
 * is_prime_number - to return the natural square root of a number
 * @n: the racine
 * Return: recusive and -1 and the square
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (_square(2, n));
}

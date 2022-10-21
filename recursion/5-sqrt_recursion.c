#include "main.h"

/**
 * _square - to return the natural square root of a number
 * @c: counter
 * @num: number
 * Return: power recusive
 */
int _square(int c, int num)
{
	if (c * c == num)
	{
		return (c);
	}
	else if (c * c < num)
	{
		return (_square(c + 1, num));
	}
	return (-1);
}
/**
 * _sqrt_recursion - to return the natural square root of a number
 * @n: the racine
 * Return: recusive and -1 and the square
 */
int _sqrt_recursion(int n)
{
	return (_square(1, n));
}

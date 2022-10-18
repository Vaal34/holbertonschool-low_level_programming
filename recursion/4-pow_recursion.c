#include "main.h"

/**
 * _pow_recursion - x power of y
 *@x: value
 *@y: power
 *Return: x power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y != 0)
	{
		return (_pow_recursion(x, y - 1) * x);
	}
	else 
	{
		return (1);
	}
}

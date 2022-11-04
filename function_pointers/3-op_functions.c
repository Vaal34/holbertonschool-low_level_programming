#include "3-calc.h"

/**
 * op_add - addition
 * @a: num 1
 * @b: num 2
 *Return: return a + b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substraction
 * @a: num 1
 * @b: num 2
 *Return: return a - b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies
 * @a: num 1
 * @b: num 2
 *Return: return a * b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - div
 * @a: num 1
 * @b: num 2
 *Return: return a / b
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - a modulo b
 * @a: num 1
 * @b: num 2
 *Return: return a / b
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

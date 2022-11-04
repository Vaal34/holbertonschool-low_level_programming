#include "3-calc.h"

/**
 * get_op_func - select the operator
 * @s: a funtion pointer
 * Return: NULL
 */

int (*get_op_func(char *s))(int, int)
	/* char *s = operator, int = num1, int = num2 */
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL) /* for all opertor */
	{
		if (*s == *ops[i].op) /* if s have just the operator of ops */
		{
			return (ops[i].f); /* we call the function with return */
		}
		i++;
	}
	return (NULL);
}

#include "3-calc.h"

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: name of arguments
 * Return: the funtion
 */

int main(int argc, char *argv[])
{
	int a, b;
	int (*f)(int, int);


	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	f = get_op_func(argv[2]); /*active la fonction get_op_funct */

	if (f == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", f(a, b));
	return (0);
}

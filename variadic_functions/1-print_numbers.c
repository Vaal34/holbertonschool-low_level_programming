#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - print numbers with stdarg
 * @separator: string ", "
 * @n: numbers of argsuments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	unsigned int print;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		print = va_arg(args, unsigned int);
		printf("%d", print);
			if (i < n - 1)
			{
				printf("%s", separator);
			}
	}
	va_end(args);
	printf("\n");
}

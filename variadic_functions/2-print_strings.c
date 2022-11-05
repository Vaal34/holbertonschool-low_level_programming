#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_strings - print string with va_list
 * @separator: string ", "
 * @n: numbers of arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *print;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		print = va_arg(args, char *);
		printf("%s", print);
		if (separator == NULL)
		{
		}
		else if (print == NULL)
		{
			printf("(nil)");
		}
		else if (i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}

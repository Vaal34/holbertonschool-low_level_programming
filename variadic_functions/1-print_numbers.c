#include "variadic_functions.h"
#include <stdarg.h>

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	unsigned int print;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		print = va_arg(args, unsigned int);
		printf("%s%d",separator, print);
	}
	va_end(args);
	printf("\n");
}

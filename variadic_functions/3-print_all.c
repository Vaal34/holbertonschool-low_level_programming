#include "variadic_functions.h"
#include <unistd.h>
#include <stdio.h>
#include <string.h>

/**
 * print_c - print a char
 * @args: args
 */
void print_c(va_list args)
{
	 printf("%c", va_arg(args, int));
}

/**
 * print_s - print string
 * @args : args
 */
void print_s(va_list args)
{
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}

/**
 * print_i - print an integer
 * @args: args
 */
void print_i(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_fl - print float
 * @args: args
 */
void print_fl(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_all - print all flag
 * @format: the string
 */
void print_all(const char * const format, ...)
{
	fp fandfunc[] = {
		{'c', print_c},
		{'s', print_s},
		{'i', print_i},
		{'f', print_fl},
		{0, NULL}
	};

	va_list args;
	int i = 0;
	int b;
	char *sep = "";

	va_start(args, format);

	while (format != NULL && format[i])
	{
		b = 0;
		while (b < 5)
		{
			if (fandfunc[b].flag == format[i])
			{
				printf("%s", sep);
				fandfunc[b].pointer_function(args);
				sep = ", ";
			}
			b++;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}

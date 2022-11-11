#include "variadic_functions.h"
#include <unistd.h>
#include <stdio.h>

/**
 * _strlen - lenght of string
 * @s: string
 * Return: lenght
 */
int _strlen(char *s)
{
	int i, c; 

	while(s[i])
	{
		i++;
		c++;
	}
	return (c);
}

/**
 * print_c - print a char
 * @args: args
 */
void print_c(va_list args)
{
	int a = va_arg(args, int);

	write(1, &a, 1);
}

/**
 * print_s - print string
 * @args : args
 */
void print_s(va_list args)
{
	char *str = va_arg(args, char *);

	write(1, str, _strlen(str));
}

/**
 * print_i - print an integer
 * @args: args
 */
void print_i(va_list args)
{
	int n = va_arg(args, int);

	write(1, &n, 1);
}

/**
 * print_fl - print float
 * @args: args
 */
void print_fl(va_list args)
{
	double i = va_arg(args, double);

	printf("%f", i);
}

/**
 * print_all - print all flag
 * @format: the string
 */
void print_all(const char * const format, ...)
{
	fp fandfunc[] = {
		{'f', print_fl},
		{'i', print_i},
		{'s', print_s},
		{'c', print_c},
		{0, NULL}
	};

	va_list args;
	int i = 0;
	int b;

	va_start(args, format);

	while (format[i])
	{
		b = 0;
		while (fandfunc[b].flag != 0)
		{
			if (fandfunc[b].flag == format[i])
			{
				fandfunc[b].pointer_function(args);
			}
			b++;
		}
		i++;
	}
	va_end(args);
}

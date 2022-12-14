#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: string name
 * @f: function pointers
 */

void print_name(char *name, void (*f)(char *))
{
	int i;

	if (f == NULL)
		exit(0);
	if (name != NULL)
	{
		for (i = 0; name[i] != '\0'; i--)
			f(&name[i]);
	}
}

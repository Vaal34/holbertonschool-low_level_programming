#include "function_pointers.h"

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (action == NULL)
		exit(0);
	for (i = 0; array[i] < array[size]; i++)
	{
		action(array[i]);
	}
}

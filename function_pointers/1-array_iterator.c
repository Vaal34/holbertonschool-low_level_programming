#include "function_pointers.h"

/**
 * array_iterator - function given as a parameter on each element of an array
 * @array: pointer to the function you need to use
 * @size: size of array
 * @action: fonction pointers
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (action != NULL && array != NULL)
	{
		for (i = 0; array[i] < array[size]; i++)
			action(array[i]);
	}
}

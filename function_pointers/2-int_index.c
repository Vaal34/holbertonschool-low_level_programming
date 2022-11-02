#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: pointer to the function you need to use
 * @size: size of array
 * @cmp: fonction pointers
 * Return: return int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp != NULL && array != NULL && size >= 0)
	{
		for (i = 0; i < size; i++)
			if (cmp(array[i]) != 0)
				return (i);
	}
	return (-1);
}




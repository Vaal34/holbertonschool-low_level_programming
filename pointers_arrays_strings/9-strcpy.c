#include "main.h"
#include <stdio.h>
/**
 * print_array - that prints n elements of an array of integers
 *
 *@a: value of array
 *@n: the number of the array
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i] < '\0' ; i++)
	{
		dest[i] = src[i];
	}	
	return (dest);
}


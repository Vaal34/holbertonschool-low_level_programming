#include "main.h"

/**
* swap_int - swaps the values of two integers
*
*@a: is the variable check
*@b: is the variable check
*
*/

void swap_int(int *a, int *b)
{
int tmp = *a;
*a = *b;
*b = tmp;
}


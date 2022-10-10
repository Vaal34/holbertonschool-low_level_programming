#include "main.h"

/**
* reset_to_98 - updates the value it points to to 98.
*
*@a: is the variable check
*@b: is the variable check
*/

void swap_int(int *a, int *b)
{
int tmp = *a;
*a = *b;
*b = tmp;
}


#include "main.h"

/**
* 3-islower - check the code
*@c: the character to check
*Return: 1 if c is lowercase, 0 otherwise
*/
int _islower(int c)
/* prototype for the function */
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

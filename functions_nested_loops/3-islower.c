#include "main.h"

/**
* 3-islower - check the code
*
* Return: 1 if c is lowercase, 0 otherwise
*
*@c: the character to check 
*
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

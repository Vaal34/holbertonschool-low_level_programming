#include "main.h"

/**
* 3-islower - check the code
*
* Return: On success 1.
*
* Description:  A column of asterisks on the left side
*, with beginning and ending almost-blank lines.
*/

int _islower(int c)

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

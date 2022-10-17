#include "main.h"

/**
 * _strlen_recursion - print the number of letter in the string with recursive
 *@s: the string
 *Return: the lengh of the strings
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
		return (_strlen_recursion(s + 1) + 1);
}

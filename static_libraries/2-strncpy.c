#include "main.h"

/**
* _strncpy - copies a string only the first n bytes of src are copied
 *
 *@dest: is the string hello
 *@src: is the string world
 *@n: value of my character after the string
 *
 *Return: to the receiver
 */


char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}

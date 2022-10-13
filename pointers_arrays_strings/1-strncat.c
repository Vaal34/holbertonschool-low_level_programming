#include "main.h"
/**
 * _strncat - concatenates two strings with n character after 
 *
 *@dest: is the string hello
 *@src: is the string world
 *
 *Return: to the receiver
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int c;
	
	for (i = 0; dest[i] != 0; i++)
	{
	}
	for (c = 0; c < n && src[c] != 0; c++)
	{
		dest[i + c] = src[c];
	}
	dest[i + c] = '\0';
	return (dest);
}

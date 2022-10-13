#include "main.h"
/**
 * _strcat - concatenates two strings
 *
 *@dest: is the string hello
 *@src: is the string world
 *
 *Return: to the receiver
 */
char *_strcat(char *dest, char *src)
{

	int i;
	int c;

	for (i = 0; dest[i] != 0; i++)
	{
	}
	for (c = 0; src[c] != 0; c++)
	{
		dest[i + c] = src[c];
	}
	dest[i + c] = '\0';
	return (dest);
}

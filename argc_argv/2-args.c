#include "main.h"
#include <stdio.h>
/**
 * main - is the main
 *@argc: arguments count
 *@argv: arguments value
 *Return: Always return 0
 */

int main(int argc, char *argv[])
{
	int c = 0;

	for (c = 0; c < argc; c++)
		printf("%s\n", argv[c]);

	return (0);
}

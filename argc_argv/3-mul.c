#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - is the main
 *@argc: arguments count
 *@argv: arguments value
 *Return: Always return 0
 */

int main(int argc, char *argv[])
{
	int a = 0;
	int b = 0;
	
	if (argc != 3)
	{
		printf("Error");
		return (1);
	}

	a = atoi (argv[1]);
	b = atoi (argv[2]);
	
	printf ("%d\n", a * b);
	return (0);
}

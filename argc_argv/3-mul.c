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
	int result;
	int number1;
	int number2;
	
	number1 = atoi(argv[1]);
	number2 = atoi(argv[2]);

	if (argv == 2)
	{
		printf(argv[1] * argv[2]);
	}
	else 
	{
		printf("error");
	}
return (0);
}

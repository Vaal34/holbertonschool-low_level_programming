#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *@argc: number of arguments
 *@argv: value of arguments
 *Return: always 0
 */

int main(int argc, char *argv[])
{
	int i, c;
	int res = 0;
	int resplusun;

	for (c = 1; c < argc; c++) /* Test if argv[c][i] is a digit */
	{
		for (i = 0; argv[c][i] != '\0'; i++)
		{
			if (argv[c][i] >= 48 && argv[c][i] <= 57)
			{
				continue;
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}

	for (c = 1; c < argc; c++)
	{
		resplusun = atoi(argv[c]);
		res = res + resplusun;
	}
	printf("%d\n", res);
	return (0);
}

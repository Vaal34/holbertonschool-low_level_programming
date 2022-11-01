#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - prints the dog struct
 * @d: pointer dog struct
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		exit(0);
	if ((*d).name == NULL || (*d).owner == NULL)
	{
		printf("Name: (nil)\n");
		printf("Age: %f\n", (*d).age);
		printf("Owner: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", (*d).name);
		printf("Age: %f\n", (*d).age);
		printf("Owner: %s\n", (*d).owner);
	}
}

#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

void print_dog(struct dog *d)
{
	if ((*d).name == NULL || (*d).owner == NULL)
	{
		d->name = "(nil)";
		d->owner = "(nil)";
	}
	if (d != NULL)
	{
		printf("Name: %s\n", (*d).name);
		printf("Age: %f\n", (*d).age);
		printf("Owner: %s\n", (*d).owner);
	}
}


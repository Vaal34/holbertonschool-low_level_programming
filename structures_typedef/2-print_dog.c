#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

void print_dog(struct dog *d)
{
	char f = "(nil)";

	if (d != NULL)
	{
		printf("Name: %s\n", (*d).name);
		printf("Age: %f\n", (*d).age);
		printf("Owner: %s\n", (*d).owner);
	}
	else if (d->name == NULL || d->owner == NULL)
	{
		printf("Name: %s\n", f);
		printf("Owner: %s\n", f);
	}
}


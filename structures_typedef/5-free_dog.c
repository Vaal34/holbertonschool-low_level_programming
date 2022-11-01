#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free malloc
 * @d: structur
 */

void free_dog(dog_t *d)
{
	free((*d).name);
	(*d).name = NULL;
	free((*d).owner);
	(*d).owner = NULL;
	free(d);
	d = NULL;

}


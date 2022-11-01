#include "dog.g"
#include <stdlib.h>

void free_dog(dog_t *d)
{
	free(d);
	d = NULL;
}


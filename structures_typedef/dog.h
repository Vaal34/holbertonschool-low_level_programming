#ifndef DOGS
#define DOGS

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - print the informations of poppy
 *@name: is his name
 *@age: his age
 *@owner: my owner
 *
 * Description: Dexcribe all information on the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif

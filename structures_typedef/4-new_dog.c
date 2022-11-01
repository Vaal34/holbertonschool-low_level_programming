#include "dog.h"

/**
 * new_dog - create a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointers of the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p = 0;
	int n, o;

	p = malloc(sizeof(dog_t));
	if (p == NULL)
	{
		free(p);
		free(p);
		return (NULL);
	}

	n = strlen(name) + 1;
	o = strlen(owner) + 1;


	(*p).name = malloc(sizeof(char) * (n));
	if ((*p).name == NULL)
	{
		free(p);
		return (NULL);
	}
	(*p).owner = malloc(sizeof(char) * (o));
	if ((*p).owner == NULL)
	{
		free(p);
		return (NULL);
	}
	(*p).age = age;
	(*p).name = strcpy((*p).name, name);
	(*p).owner = strcpy((*p).owner, owner);
	return (p);
}

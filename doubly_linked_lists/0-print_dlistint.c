#include "lists.h"
#include <stdlib.h>

/**
 * print_dlistint - prints all the elements of a listint_t list
 * @h: struct
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int size = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		size++;
	}
	return (size);
}

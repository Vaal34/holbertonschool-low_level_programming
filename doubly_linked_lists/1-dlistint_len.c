#include "lists.h"
#include <stdlib.h>

/**
 * dlistint_len - number of elements in a linked dlistint_t list
 *@h: struct
 *Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int size = 0;

	while (h != NULL)
	{
		h = h->next;
		size++;
	}
	return (size);
}

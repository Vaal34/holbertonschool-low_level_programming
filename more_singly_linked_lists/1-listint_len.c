#include "lists.h"
#include <stdlib.h>

/**
 * listint_len - number of elements in a linked listint_t list
 *@h: struct
 *Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	int size = 0;

	while (h != NULL)
	{
		h = h->next;
		size++;
	}
	return (size);
}

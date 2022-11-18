#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - that returns the nth node of a listint_t linked list
 * @head: pointer of struct, first node
 * @index: number of node
 * Return: the nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	unsigned int count = 0;

	tmp = head;

	while (tmp != NULL)
	{
		if (count == index)
			return (head->next);
		count++;
		tmp = tmp->next;
	}
	return (head);
}

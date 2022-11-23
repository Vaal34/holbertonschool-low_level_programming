#include "lists.h"
#include <stdlib.h>

/**
 * get_dnodeint_at_index - that returns the nth node of a listint_t linked list
 * @head: pointer of struct, first node
 * @index: number of node
 * Return: the nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head)
	{
		if (count == index)
		{
			return (head);
		}
		count++;
		head = head->next;
	}
	return (NULL);
}

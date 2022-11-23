#include "lists.h"
#include <stdlib.h>

/**
 * pop_dlistint - free all list
 * @head: the first node
 *Return: the head node’s data
 */

int pop_dlistint(dlistint_t **head)
{
	dlistint_t *tmp;
	int b;

	if ((*head) == NULL)
	{
		return (0);
	}
	b = (*head)->n;
	tmp = *head;
	*head = (*head)->next;
	free(tmp);
	tmp = NULL;
	return (b);
}

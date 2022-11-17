#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - free all list
 * @head: the first node
 *Return: the head node’s data
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int b = (*head)->n;
	
	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
		tmp = NULL;
	}
	return (b);
}

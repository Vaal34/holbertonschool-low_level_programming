#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - free all list
 * @head: the first node
 */

void free_listint2(listint_t **head)
{
	if (*head == NULL)
		free(*head);
	else
	{
		free_listint2((*head)->next);
		free((*head)->n);
		free(*head);
		free(head);
	}
}

#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - free all list
 * @head: the first node
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (*head == NULL)
		return;
	while (*head != NULL)
		{
			tmp = (*head)->next;
			free(*head);
			*head = tmp;
		}
	*head = NULL;
}

#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - free all list
 * @head: the first node
 */

void free_listint(listint_t *head)
{
	if (head == NULL)
		free(head);
	else
	{
		free_listint(head->next);
		free(head);
	}
}

#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - free all list
 *@head: the first node
 */

void free_dlistint(dlistint_t *head)
{
	if (head != NULL)
	{
		free_dlistint(head->next);
		free(head);
	}
}

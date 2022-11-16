#include "lists.h"
#include <stdlib.h>

/**
 * free_list - free all list
 * @head: the first node
 */

void free_list(list_t *head)
{
	if (head == NULL)
	free(head);
	else
	free(head->next);
	free(head);
	free(str);
}

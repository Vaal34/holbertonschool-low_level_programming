#include "lists.h"
#include <stdlib.h>

/**
 * free_list - free all list
 * @head: the first node
 */

void free_list(list_t *head)
{
	free(head);
	free(head->next);
}

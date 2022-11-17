#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - free all list
 * @head: the first node
 */

void free_listint2(listint_t **head)
{
	while ((*head)->next != NULL)
	{
	free(*head);
	}
}

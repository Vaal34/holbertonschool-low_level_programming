#include "lists.h"
#include <stdlib.h>

void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head);
		head = NULL;
	}
}

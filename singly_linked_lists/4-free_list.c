#include "lists.h"
#include <stdlib.h>

void free_list(list_t *head)
{
	free(head);
	head = NULL;
}

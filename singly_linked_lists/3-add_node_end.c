#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end -  adds a new node at the end of a list_t list
 * @head: the first node
 * @str: the string
 * Return:  the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr;
	list_t *tmp;

	tmp = *head;

	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
		return (NULL);

	ptr->str = strdup(str);
	ptr->len = strlen(str);
	ptr->next = NULL;

	if (*head != NULL)
	{
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = ptr;
	}
	else
	{
		*head = ptr;
	}
	return (ptr);
}

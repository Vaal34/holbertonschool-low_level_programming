#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: first node
 * @n: element of the struct
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{

	dlistint_t *p;

	p = malloc(sizeof(dlistint_t));
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	p->n = n;
	p->next = *head;
	p->prev = NULL;

	if (*head != NULL)
		(*head)->prev = p;
	*head = p;
	return (p);
}

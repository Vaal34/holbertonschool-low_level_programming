#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *add_dnodeint_end - adds a new node at the end of a listint_t list
 * @head: first node
 * @n: element of the struct
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *p, *tmp;

	p = malloc(sizeof(dlistint_t));
	if (p == NULL)
	{
		return (NULL);
	}

	p->n = n;
	p->next = NULL;
	tmp = *head;

	if (*head == NULL)
	{
		p->prev = NULL;
		*head = p;
	}

	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = p;
	p->prev = tmp;
	return (p);
}

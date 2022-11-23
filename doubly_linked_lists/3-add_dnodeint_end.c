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
	else
	{
		p->n = n;
		if ((*head) == NULL)
		{
			p->next = NULL;
			p->prev = NULL;
			(*head) = p;
		}
		else
		{
			tmp = (*head);
			while (tmp->next != NULL)
			{
				tmp = tmp->next;
			}
			tmp->next = p;
			p->prev = temp;
			p->next = NULL;
		}
	}
	return (p);
}

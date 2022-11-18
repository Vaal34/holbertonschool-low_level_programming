#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - sum of the list
 * @head: the first node
 * Return: sum of the list
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	else
	{
		while (head->next != NULL)
		{
			head = head->next;
			sum += head->n;
		}
	}
	return (sum);
}

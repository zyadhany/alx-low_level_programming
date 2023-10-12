#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - check the code
 * @head: given list
 * @index: index of list
 *
 * Return: pointer to list.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *X, *tmp;

	if (!head)
		return (-1);

	X = *head;

	if (index == 0)
	{
		if (!X)
			return (-1);
		tmp = X->next;
		tmp->prev = NULL;
		free(X);
		*head = tmp;
		return (1);
	}

	for (i = 0; i < index - 1; i++)
	{
		if (!X)
			return (-1);
		X = X->next;
	}
	if (!X)
		return (-1);
	if (!X->next)
		return (-1);

	tmp = X->next->next;
	free(X->next);
	X->next = tmp;

	if (tmp)
		tmp->prev = X;

	return (1);
}

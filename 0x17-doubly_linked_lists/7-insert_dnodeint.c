#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - check the code
 * @h: given list
 * @idx: index of list
 * @n: value of index
 *
 * Return: pointer to list.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *X, *tmp;

	if (!h)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	X = *h;
	tmp = malloc(sizeof(dlistint_t));
	if (!tmp)
		return (NULL);

	tmp->n = n;
	tmp->next = NULL;
	tmp->prev = NULL;

	for (i = 0; i < idx - 1; i++)
	{
		if (!X)
			return (NULL);
		X = X->next;
	}
	if (!X)
		return (NULL);

	tmp->next = X->next;
	tmp->prev = X;
	X->next = tmp;

	if (tmp->next)
		tmp->next->prev = tmp;

	return (tmp);
}

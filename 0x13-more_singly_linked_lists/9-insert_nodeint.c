#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - check the code
 * @Y: given list
 * @k: index of list
 * @n: value of index
 *
 * Return: pointer to list.
 */

listint_t *insert_nodeint_at_index(listint_t **Y, unsigned int k, int n)
{
	unsigned int i = 0;
	listint_t *X = *Y, *tmp = malloc(sizeof(listint_t));

	if (!tmp)
		return (NULL);

	tmp->n = n;
	tmp->next = NULL;

	if (k == 0)
	{
		tmp->next = *Y;
		*Y = tmp;
		return (tmp);
	}


	for (i = 0; i < k - 1; i++)
	{
		if (!X)
			return (NULL);
		X = X->next;
	}

	if (!X)
		return (NULL);

	tmp->next = X->next;

	X->next = tmp;

	return (tmp);
}

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - check the code
 * @Y: given list
 * @k: index of list
 *
 * Return: pointer to list.
 */

int delete_nodeint_at_index(listint_t **Y, unsigned int k)
{
	unsigned int i = 0;
	listint_t *X = *Y, *tmp;


	if (k == 0)
	{
		if (!X)
			return (-1);
		tmp = X->next;
		free(X);
		*Y = tmp;
		return (1);
	}


	for (i = 0; i < k - 1; i++)
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

	return (1);
}

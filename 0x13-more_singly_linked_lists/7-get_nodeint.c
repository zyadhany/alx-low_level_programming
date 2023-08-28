#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - check the code
 * @X: given list
 * @k: index of list
 *
 * Return: pointer to list.
 */

listint_t *get_nodeint_at_index(listint_t *X, unsigned int k)
{

	int i = 0;

	for (i = 0; i <= k; i++)
	{
		if (!X)
			return (NULL);
		if (i == k)
			return (X);
		X = X->next;
	}

	return (NULL);
}

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint - check the code
 * @X: given list
 *
 * Return: pointer to list.
 */

listint_t *reverse_listint(listint_t **X)
{
	listint_t *tmp = NULL, *Y;

	while (*X)
	{
		Y = *X;
		*X = (*X)->next;
		Y->next = tmp;
		tmp = Y;
	}

	*X = tmp;
	return (*X);
}

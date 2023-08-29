#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


/**
 * free_listint_safe - check the code
 * @X: given list
 *
 * Return: free all element of list
 */

size_t free_listint_safe(listint_t **X)
{
	listint_t *tmp;
	int n = 0;

	if (!X)
		return (n);

	if (*X)
	{
		tmp = (*X)->next;
		free(*X);
		n++;
		*X = tmp;
		free_listint2(X);
	}

	*X = NULL;
	return (n);
}

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - check the code
 * @X: given list
 *
 * Return: head element
 */

int pop_listint(listint_t **X)
{
	int n;
	listint_t *tmp;

	if (!X || !(*X))
		return (0);

	n = (*X)->n;
	tmp = (*X)->next;

	free(*X);

	*X = tmp;

	return (n);
}

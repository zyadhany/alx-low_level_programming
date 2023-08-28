#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - check the code
 * @X: given list
 *
 * Return: size of list.
 */

int sum_listint(listint_t *X)
{
	int n = 0;

	while (X)
	{
		n += X->n;
		X = X->next;
	}

	return (n);
}

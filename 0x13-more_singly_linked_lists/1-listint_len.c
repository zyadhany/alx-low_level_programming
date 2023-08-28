#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - check the code
 * @X: given list
 *
 * Return: size of list.
 */

size_t listint_len(const listint_t *X)
{

	int n = 0;

	while (X)
	{
		n++;
		X = X->next;
	}

	return (n);
}

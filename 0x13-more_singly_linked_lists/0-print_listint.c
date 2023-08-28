#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - check the code
 * @X: given list
 *
 * Return: size of list.
 */

size_t print_listint(const listint_t *X)
{

	int n = 0;

	while (X)
	{
		printf("%d\n", X->n);
		n++;
		X = X->next;
	}

	return (n);
}

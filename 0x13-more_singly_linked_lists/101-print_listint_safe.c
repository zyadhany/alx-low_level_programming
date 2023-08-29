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

size_t print_listint_safe(const listint_t *X)
{
	int n = 0, at = 0, keep = 0, i;

	while (X)
	{

		for ( i = 0; i < at; i++)
		{
			
			
		}
		
		if (keep)
			break;
		printf("%d\n", X->n);
		n++;

		at++;
		X = X->next;
	}

	return (n);
}

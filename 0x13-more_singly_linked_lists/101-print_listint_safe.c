#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - check the code
 * @X: given list
 *
 * Return: size of list.
 */

size_t print_listint_safe(const listint_t *X)
{
	int n = 0, at = 0, keep = 0, i;
	listint_t *Y[1024];

	while (X)
	{
		for (i = 0; i < at; i++)
		{
			if (Y[i] == X->next)
			{
				keep = 1;
				break;
			}

		}

		if (keep)
			break;
		printf("%d\n", X->n);
		n++;
		Y[at] = X->next;
		at++;
		X = X->next;
	}

	return (n);
}

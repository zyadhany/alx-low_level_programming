#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - check the code
 * @X: given list
 *
 * Return: free all element of list
 */

void free_listint(listint_t *X)
{
	if (X)
	{
		free_listint(X->next);
		free(X);
	}
}

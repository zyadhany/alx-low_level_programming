#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - check the code
 * @X: given list
 * @n: added element
 *
 * Return: pointer to list
 */

listint_t *add_nodeint_end(listint_t **X, const int n)
{

	listint_t *tmp = malloc(sizeof(listint_t)), *at = NULL;

	if (!tmp)
	{
		return (NULL);
	}
	tmp->n = n;
	tmp->next = NULL;
	at = *X;

	if (!*X)
	{
		*X = tmp;
		return (*X);
	}


	while (at->next)
	{
		at = at->next;
	}

	at->next = tmp;

	return (*X);
}

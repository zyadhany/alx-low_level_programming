#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - check the code
 * @X: given list
 * @n: added element
 *
 * Return: pointer to list
 */

listint_t *add_nodeint(listint_t **X, const int n)
{

	listint_t *tmp = malloc(sizeof(listint_t));

	if (!tmp)
	{
		return (NULL);
	}


	tmp->n = n;
	tmp->next = *X;

	*X = tmp;

	return (*X);
}

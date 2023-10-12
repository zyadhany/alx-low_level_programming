#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end - check the code
 * @head: given list
 * @n: added element
 *
 * Return: pointer to list
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp, *at = NULL;

	if (!head)
		return (NULL);

	tmp = malloc(sizeof(dlistint_t));

	if (!tmp)
		return (NULL);

	tmp->n = n;
	tmp->next = NULL;
	tmp->prev = NULL;

	at = *head;
	if (!*head)
	{
		*head = tmp;
		return (*head);
	}

	while (at->next)
	{
		at = at->next;
	}

	at->next = tmp;
	tmp->prev = at;

	return (*head);
}

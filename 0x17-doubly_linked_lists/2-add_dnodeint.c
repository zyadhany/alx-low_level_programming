#include "lists.h"

/**
 * add_dnodeint - add node to begin of list
 * @head: given list
 * @n: added value
 *
 * Return: pointer to begining of list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tmp;

	if (!head)
		return (NULL);

	tmp = malloc(sizeof(dlistint_t));

	if (!tmp)
		return (*head);

	tmp->n = n;
	tmp->next = *head;
	tmp->prev = NULL;

	*head = tmp;
	return (tmp);
}

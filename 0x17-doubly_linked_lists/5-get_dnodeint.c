#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_t - check the code
 * @head: given list
 * @index: index of list
 *
 * Return: pointer to list.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{

	unsigned int i = 0;

	for (i = 0; i <= index; i++)
	{
		if (!head)
			return (NULL);
		if (i == index)
			return (head);
		head = head->next;
	}

	return (NULL);
}

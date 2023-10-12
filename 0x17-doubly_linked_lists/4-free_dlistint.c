#include "lists.h"

/**
 * free_dlistint - check the code
 * @head: given list
 *
 * Return: free all element of list
 */

void free_dlistint(dlistint_t *head)
{
	if (head)
	{
		free_dlistint(head->next);
		free(head);
	}
}

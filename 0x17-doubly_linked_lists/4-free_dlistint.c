#include "lists.h"

/**
 * dlistint_t - check the code
 * @head: given list
 *
 * Return: free all element of list
 */

void free_dlistint(dlistint_t *head)
{
	if (head)
	{
		free_listint(head->next);
		free(head);
	}
}

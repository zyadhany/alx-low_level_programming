#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - check the code
 * @head: given list
 *
 * Return: size of list.
 */

int sum_dlistint(dlistint_t *head)
{
	int summ = 0;

	while (head)
	{
		head += head->n;
		head = head->next;
	}

	return (summ);
}

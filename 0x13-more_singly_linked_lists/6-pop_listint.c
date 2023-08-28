#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - check the code
 * @X: given list
 *
 * Return: free all element of list
 */

int pop_listint(listint_t **X)
{
	free_listint(*X);
	return (1);
}

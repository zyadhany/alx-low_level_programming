#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - check the code
 * @X: given list
 *
 * Return: free all element of list
 */

void free_listint2(listint_t **X)
{
	free_listint(*X);
	free(X);
}

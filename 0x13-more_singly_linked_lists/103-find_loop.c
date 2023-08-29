#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


/**
 * find_listint_loop - check the code
 * @X: given list
 *
 * Return: free all element of list
 */

listint_t *find_listint_loop(listint_t *X)
{
	int n = 0;


	while (X)
	{
		n++;
		X = X->next;
		if (n == 2000)
			return (X);
	}

	return (NULL);
}

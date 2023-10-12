#include "lists.h"

/**
 * dlistint_len - get numper of element in given list
 * @h: given list
 *
 * Return: numper of element in list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}

	return (n);
}

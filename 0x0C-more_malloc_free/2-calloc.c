#include <stdlib.h>
#include "main.h"


/**
 * *_calloc - intery point
 * @nmemb: input 1
 * @size: iput 3
 * Return: value of functiuon
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *X;
	int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	X = malloc(nmemb * size);

	if (X == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (nmemb * size); i++)
	{
		*((char *)(X) + i) = 0;
	}

	return (X);
}

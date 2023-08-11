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

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	X = malloc(nmemb * size);

	if (X == NULL)
	{
		return (NULL);
	}


	return (X);
}

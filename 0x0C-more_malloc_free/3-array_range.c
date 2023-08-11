#include <stdlib.h>
#include "main.h"


/**
 * *array_range - intery point
 * @min: input 1
 * @max: iput 3
 * Return: value of functiuon
 */

int *array_range(int min, int max)
{
	int n, i;
	int *X;

	n = 0;

	if (min > max)
	{
		return (NULL);
	}

	X = ((max + 1) - min);

	X = malloc(n * sizeof(int));

	if (X == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < n; i++)
	{
		X[i] = min + i;
	}

	return (X);
}

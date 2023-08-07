#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * alloc_grid - Entry point
 *@m: input width
 *@n: input height
 * Return: a pointer to the array, or NULL if it fails
 */

int **alloc_grid(int m, int n)
{
	int **arr, i, j;

	if (!n || !m)
	{
		return (NULL);
	}


	arr = malloc(sizeof(int *) * n);

	if (!arr)
	{
		return (NULL);
	}

	for (i = 0; i < n; i++)
	{
		(arr + i) = malloc(sizeof(int) * m);

		if (!arr[i])
		{
			return (NULL);
		}


		for (j = 0; j < m; j++)
		{
			arr[i][j] = 0;
		}
	}

	if (!n || !m)
	{
		return (NULL);
	}


	return (arr);
}

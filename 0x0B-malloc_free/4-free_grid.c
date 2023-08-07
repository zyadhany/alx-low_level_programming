#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * alloc_grid - Entry point
 *@arr: input grid
 *@n: input height
 * Return: a pointer to the array, or NULL if it fails
 */

void free_grid(int **arr, int n)
{
	int j;

	if (!arr)
	{
		for (j = 0; j < n; j++)
		{
			free(arr[j]);
		}
		free(arr);
		return (NULL);
	}


	return (arr);
}

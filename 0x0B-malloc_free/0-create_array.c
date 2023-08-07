#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Entry point
 *@size: size of the array
 *@c: character
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *arr = malloc(sizeof(char) * size);
	int i, n = size;

	if (arr)
	{
		for (i = 0; i < n; i++)
		{
			arr[i] = c;
		}
	}
	return (arr);
}

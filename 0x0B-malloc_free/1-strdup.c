#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Entry point
 *@str: input string
 * Return: a pointer to the array, or NULL if it fails
 */
char *_strdup(char *str)
{
	int i, n = strlen(str);
	char *arr = malloc(sizeof(char) * n);

	if (arr)
	{
		for (i = 0; i < n; i++)
		{
			arr[i] = str[i];
		}
	}
	if (arr == NULL || !n)
	{
		printf("failed to allocate memory\n");
	}

	return (arr);
}

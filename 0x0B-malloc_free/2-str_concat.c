#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Entry point
 *@s1: input string
 *@s2: second input string
 * Return: a pointer to the array, or NULL if it fails
 */
char *str_concat(char *s1, char *s2)
{

	int i, n = 0, m = 0;
	char *arr = NULL;

	if (s1)
	{
		n = strlen(s1);
	}

	if (s2)
	{
		m = strlen(s2);
	}

	arr = malloc(sizeof(char) * (n + m + 1));

	if (arr)
	{
		for (i = 0; i < n; i++)
		{
			arr[i] = s1[i];
		}
		for (i = 0; i < m; i++)
		{
			arr[n + i] = s2[i];
		}
		arr[n + m] = '\0';
	}
	if (arr == NULL)
	{
		printf("failed to allocate memory\n");

	}

	return (arr);
}

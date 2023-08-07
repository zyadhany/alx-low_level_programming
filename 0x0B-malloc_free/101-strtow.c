#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * strtow - Entry point
 *@str: input string
 * Return: a pointer to a new string
 */

char **strtow(char *str)
{
	int i, w = 1, j, k = 0, h, re;
	char **arr;

	if (*str == '\0' || str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' && str[i + 1] != ' ')
			w++;
	}
	arr = malloc(w * sizeof(char *));
	if (arr == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		re = 0;
		if (str[i] != ' ')
		{
			for (j = i ; str[j] != '\0' && str[i] != ' '; j++)
			{
				re++;
			}
			arr[k] = malloc((re + 1) * sizeof(char));
			if (arr[k] == NULL)
			{
				for (h = 0; h <= k; h++)
					free(arr[h]);
				free(arr);
				return (NULL);
			}
			for (h = 0; i < j; i++, h++)
				arr[k][h] = str[i];
			arr[k][h] = '\0';
			k++;
		}
	}
	return (arr);
}

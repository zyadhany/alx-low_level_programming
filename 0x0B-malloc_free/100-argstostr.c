#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - Entry point
 *@ac: number of arguments
 *@av: arguments
 * Return: a pointer to a new string
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0, n, re = 0, isit;
	char *p;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		isit = 0;
		for (j = 0; av[i][j] != '\0'; j++)
		{
			n++;
			isit = 1;
		}
		re += isit;
	}

	p = (char *)malloc(n + re * sizeof(char));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		isit = 0;
		for (j = 0; av[i][j] != '\0'; j++)
		{
			isit = 1;
			p[k] = av[i][j];
			k++;
		}
		if (isit)
		p[k] = '\n';
		k++;
	}
	p[k] = '\0';
	return (p);
}

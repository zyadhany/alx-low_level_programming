#include <stdlib.h>
#include "main.h"


/**
 * sizee - size if string
 * @s:  input string
 * Return: size of string
 */


int sizee(char *s)
{
	int n = 0;

	if (s == NULL)
		return (0);

	while (s[n] != '\0')
	{
		n++;
	}
	return (n);
}

/**
 * *string_nconcat - intery point
 * @s1: input 1
 * @s2: input 2
 * @k: iput 3
 * Return: value of functiuon
 */


char *string_nconcat(char *s1, char *s2, unsigned int k)
{
	int n, m, i, at;
	char *s;

	n = sizee(s1);
	m = sizee(s2);

	if (k < m)
		m = k;

	s = malloc(sizeof(char) * (n + m + 1));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < n; i++)
	{
		s[at] = s1[i];
		at++;
	}
	for (i = 0; i < m; i++)
	{
		s[at] = s2[i];
		at++;
	}
	s[at] = '\0';

	return (s);
}

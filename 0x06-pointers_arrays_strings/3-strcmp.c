#include "main.h"


/**
 * _strcmp - compares two strings
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 *
 * Return: 0 if the strings are equal,
 * otherwise the difference between the first
 * non-matching characters
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] && s2[i] && s1[i] == s2[i])
	{
		i++;
	}

	return (s1[i] - s2[i]);
}

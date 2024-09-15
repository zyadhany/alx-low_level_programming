#include "main.h"


/**
 * leet - encodes a string into 1337
 * @str: pointer to the string to encode
 *
 * Return: pointer to the encoded string
 */
char *leet(char *str)
{
	int i = 0;
	char *s = str;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};
	char num[8] = {'0', '1', '2', '3', '4', '5', '6', '7'};

	while (s[i])
	{
		int j = 0;

		while (j < 8)
		{
			if (s[i] == leet[j] || s[i] - 32 == leet[j])
			{
				s[i] = num[j];
			}
			j++;
		}
		i++;
	}

	return (s);
}

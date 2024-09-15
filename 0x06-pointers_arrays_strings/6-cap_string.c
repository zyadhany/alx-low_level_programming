#include "main.h"


/**
 * cap_string - capitalizes all words of a string
 * @str: pointer to the string to capitalize
 *
 * Return: pointer to the capitalized string
 */
char *cap_string(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}

		i++;
	}

	return (str);
}

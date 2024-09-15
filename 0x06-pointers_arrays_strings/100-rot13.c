#include "main.h"


/**
 * rot13 - encodes a string using rot13
 * @s: pointer to the string to encode
 *
 * Return: pointer to the encoded string
 */
char *rot13(char *s)
{
	int i = 0;
	char *str = s;
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (str[i])
	{
		int j = 0;

		while (j < 52)
		{
			if (str[i] == alpha[j])
			{
				str[i] = rot13[j];
				break;
			}
			j++;
		}
		i++;
	}

	return (str);
}

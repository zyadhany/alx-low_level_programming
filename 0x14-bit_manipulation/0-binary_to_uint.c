#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <math.h>
#include "main.h"


/**
 * binary_to_uint - check the code
 * @s: given binary
 *
 * Return: pointer to list
 */

unsigned int binary_to_uint(const char *s)
{
	unsigned int k = 0, i = 0, n = 0, re, j;

	while (s[n] != '\0')
	{
		n++;
	}


	while (s[i] != '\0')
	{
		if (s[i] == '1')
		{
			re = 1;
			for ( j = 0; j < n - i - 1; j++)
			{
				re *= 2;
			}
			k+= re;
		}

		i++;
	}


	return (k);
}

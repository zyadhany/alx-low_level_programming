#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <math.h>
#include "main.h"


/**
 * _pow - check the code
 * @n: num1
 * @s: power num
 *
 * Return: n power to k
 */




/**
 * binary_to_uint - check the code
 * @s: given binary
 *
 * Return: pointer to list
 */

unsigned int binarfy_to_uint(const char *s)
{
	unsigned int k = 0, i = 0, n = 0;

	while (s[n] != '\0')
	{
		n++;
	}


	while (s[i] != '\0')
	{
		if (s[i] == '1')
		{
			k += _pow(2,n-i-1);
		}

		i++;
	}


	return (k);
}

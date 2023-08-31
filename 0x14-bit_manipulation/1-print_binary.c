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

unsigned int _pow(unsigned int n ,unsigned int k)
{
	unsigned int i = 0, re = 1;

	for ( i = 0; i < k; i++)
	{
		re *= n;
	}


	return (re);
}



/**
 * binary_to_uint - check the code
 * @s: given binary
 *
 * Return: pointer to list
 */

unsigned int binary_to_uint(const char *s)
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

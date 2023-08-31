#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <math.h>
#include "main.h"

/**
 * _pow1 - check the code
 * @n: num1
 * @k: power num
 *
 * Return: n power to k
 */

unsigned long int _pow1(unsigned long int n, unsigned long int k)
{
	unsigned int i = 0, re = 1;

	for (i = 0; i < k; i++)
	{
		re *= n;
	}


	return (re);
}

/**
 * print_binary - check the code
 * @k: given int
 *
 * Return: pointer to list
 */

void print_binary(unsigned long int k)
{
	unsigned long int n = k;
	int re = -1;

	if (k == 0)
	{
		_putchar('0');
		return;
	}

	while (k)
	{
		k >>= 1;
		re++;
	}

	while (re >= 0)
	{
		if ((n >> re) & 1)
		{
			putchar('1');
		}
		else
		{
			putchar('0');
		}

		re--;
	}
}

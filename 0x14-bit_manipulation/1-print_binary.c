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
	unsigned long int i = 0, n = 31;

	if (k == 0)
	{
		_putchar('0');
		return;
	}

	while (k)
	{

		if (_pow1(2, n) <= k)
		{
			k -= _pow1(2, n);
			i = 1;
			putchar('1');

			if (!k)
			{
				for (i = 0; i < n; i++)
				{
					putchar('0');
				}
				return;
			}


		} else if (i)
		{
			putchar('0');
		}

		n--;
	}

}

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <math.h>
#include "main.h"



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

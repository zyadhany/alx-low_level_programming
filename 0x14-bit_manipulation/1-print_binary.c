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
	int i, n = 0;
	char s[64];

	while (k)
	{
		if (k % 2)
			s[n] = '1';
		else
			s[n] = '0';

		k /= 2;
		n++;
	}

	for (i = n - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}


}

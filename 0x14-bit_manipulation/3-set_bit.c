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
 * set_bit - check the code
 * @n: given binary
 * @k: given index
 *
 * Return: pointer to list
 */

int set_bit(unsigned long int *n, unsigned int k)
{

	if (k > 64)
	{
		return (-1);
	}

	*n |= _pow1(2, k);

	return (1);
}

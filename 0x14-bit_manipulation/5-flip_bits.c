#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <math.h>
#include "main.h"

/**
 * flip_bits - check the code
 * @n: given binary
 * @k: given index
 *
 * Return: pointer to list
 */

unsigned int flip_bits(unsigned long int n, unsigned long int k)
{

	if (k > 64)
	{
		return (-1);
	}
	if ((n >> k) & 1)
	{
		n -= 3;
	}

	return (1);
}

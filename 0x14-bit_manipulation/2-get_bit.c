#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <math.h>
#include "main.h"



/**
 * get_bit - check the code
 * @n: given binary
 * @k: given index
 *
 * Return: pointer to list
 */

int get_bit(unsigned long int n, unsigned int k)
{

	if (k > 64)
	{
		return (-1);
	}

	return ((n >> k) & 1);
}

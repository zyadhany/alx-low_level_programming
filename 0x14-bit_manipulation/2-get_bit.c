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
	unsigned int i = 0;

	while (n && i < k)
	{


		i++;
		n /= 2;
	}

	if (i == k)
	{
		return (n % 2);
	}


	return (-1);
}

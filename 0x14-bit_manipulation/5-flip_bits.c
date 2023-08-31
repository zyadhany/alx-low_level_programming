#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <math.h>
#include "main.h"

/**
 * flip_bits - check the code
 * @n: given binary
 * @m: given index
 *
 * Return: pointer to list
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int re = 0;

	while (n || m)
	{
		if (n & 1 != m & 1)
		{
			re++;
		}
		n >>= 1;
		m >>= 1;
	}
	
	

	return (re);
}

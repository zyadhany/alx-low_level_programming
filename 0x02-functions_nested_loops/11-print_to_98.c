#include <stdio.h>
#include <math.h>
#include "main.h"

/**
 * print_to_98 - start
 * @n: the input to be cheaked
 * Return:0
*/

void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d, ", n);
		if (n > 98)
			n--;
		else
		n++;
	}
	printf("%d\n", n);
}

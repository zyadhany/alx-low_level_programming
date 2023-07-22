#include <stdio.h>
#include <math.h>
#include "main.h"

/**
 * print_last_digit - start
 * @n: the input to be cheaked
 * Return:0
*/

int print_last_digit(int n)
{
	if (n < 0)
	{
		n *= -1;
	}

	_putchar('0' + n % 10);
	return (n % 10);
}

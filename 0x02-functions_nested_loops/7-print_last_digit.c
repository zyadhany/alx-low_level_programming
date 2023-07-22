#include <stdio.h>
#include <math.h>
#include "main.h"

/**
 * print_last_digit - start
 * @k: the input to be cheaked
 * Return:0
*/

int print_last_digit(int k)
{
	long long int n = k;

	n = (n + -2 * n * (n < 0));
	_putchar('0' + n % 10);
	return (n % 10);
}

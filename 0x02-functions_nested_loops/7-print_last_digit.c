#include <stdio.h>
#include <math.h>
#include "main.h"

/**
 * int print_last_digit(int); - start
 * @n: the input to be cheaked
 * Return:0
*/

int print_last_digit(int n)
{
	_putchar('0' + n % 10);
	return (n % 10);
}

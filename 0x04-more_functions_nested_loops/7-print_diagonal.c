#include <stdio.h>
#include <math.h>
#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 * print_diagonal - start
 * @n: the input char
 * Return:0
*/

void print_diagonal(int n)
{
	int i = 0;

	for (i = 1; i <= n; i++)
	{
		if (i != n)
		_putchar(' ');
		else
		_putchar('\\');
	}
	_putchar('\n');
}

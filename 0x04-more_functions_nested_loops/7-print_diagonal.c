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
	int i, j;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			if (i != j)
			_putchar(' ');
			else
			_putchar('\\');
		}
	_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}

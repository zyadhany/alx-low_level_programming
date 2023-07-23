#include <stdio.h>
#include <math.h>
#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 * print_triangle - start
 * @size: the input char
 * Return:0
*/

void print_triangle(int size)
{
	int i, j, n = size;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n - i; j++)
		{
			_putchar(' ');
		}
		for (j = n - i + 1; j <= n; j++)
		{
			_putchar('#');
		}
	_putchar('\n');
	}

	if (n <= 0)
		_putchar('\n');
}

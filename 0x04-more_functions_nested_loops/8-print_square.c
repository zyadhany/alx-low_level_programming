#include <stdio.h>
#include <math.h>
#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 * print_square - start
 * @size: the input char
 * Return:0
*/

void print_square(int size)
{
	int i, j, n = size;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			_putchar('#');
		}
	_putchar('\n');
	}

}

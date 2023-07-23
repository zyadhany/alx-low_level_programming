#include <stdio.h>
#include <math.h>
#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 * print_line - start
 * @c: the input char
 * Return:0
*/

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}

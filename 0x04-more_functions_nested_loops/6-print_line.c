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

print_line(int c)
{
	int i;

	for (i = 0; i < c; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}

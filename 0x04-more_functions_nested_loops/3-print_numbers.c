#include <stdio.h>
#include <math.h>
#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 * print_numbers - start
 * Return:0
*/

void print_numbers(void)
{
	char a;

	for (a = '0'; a <= '9'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}

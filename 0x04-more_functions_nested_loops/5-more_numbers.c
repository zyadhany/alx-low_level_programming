#include <stdio.h>
#include <math.h>
#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 * more_numbers - start
 * Return:0
*/

void more_numbers(void)
{
	int a, b;

	for (a = 0; a <= 10; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			int c = (b / 10) % 10;

			if (c)
				_putchar(c + '0');
			_putchar(b % 10 + '0');
		}
	}
	_putchar('\n');
}

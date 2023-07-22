#include <stdio.h>
#include <math.h>
#include "main.h"

/**
 * print_last_digit - start
 * Return:0
*/

void jack_bauer(void)
{
	int a, b, c, d, f = '9';

	for (a = '0'; a <= '2'; a++)
	{
		if (a == '2')
		{
			f = '4';
		}

		for (b = '0'; b <= f; b++)
		{
			for (c = '0'; c < '6'; c++)
			{
				for (d = '0'; d <= '9'; d++)
				{
					_putchar(a);
					_putchar(b);
					_putchar(':');
					_putchar(c);
					_putchar(d);
					_putchar('\n');
				}
			}
		}
	}

}

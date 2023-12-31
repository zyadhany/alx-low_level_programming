#include <stdio.h>
#include <math.h>
#include "main.h"

/**
 * print_times_table - start
 * @n: the input to be cheaked
 * Return:0
*/

void print_times_table(int n)
{
	int i, j;

	if (n > 15 || n < 0)
	return;

	for (i = 0; i <= n; i++)
	{
		putchar('0');
		for (j = 1; j <= n; j++)
		{
			int x = i * j, k = 1000;

			putchar(',');
			while (k > x + (x == 0))
			{
				putchar(' ');
				k /= 10;
			}
			printf("%d", x);
		}
		putchar('\n');
	}
}

#include <stdio.h>
#include <math.h>
#include "main.h"

/**
 * print_to_98 - start
 * @n: the input to be cheaked
 * Return:0
*/

void print_to_98(int n)
{
	printf("%d", n);
	for (n = n + 1; n <= 98; n++)
	{
		printf(", %d", n);
	}
	putchar('\n');
}

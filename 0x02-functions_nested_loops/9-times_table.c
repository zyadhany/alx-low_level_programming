#include <stdio.h>
#include <math.h>
#include "main.h"

/**
 * times_table - start
 * Return:0
*/

void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		putchar('0');
		for (j = 1; j <= 9; j++)
		{
			if (i * j < 10)
				printf(",  ");
			else
				printf(", ");
			printf("%d", i * j);
		}
		putchar('\n');
	}

}


#include <stdio.h>
#include <math.h>
#include "main.h"

/**
 * print_alphabet_x10 - start
 * Return:0
*/

void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		char a;

		for (a = 'a'; a <= 'z'; a++)
		{
			putchar(a);
		}
		putchar('\n');
	}
}

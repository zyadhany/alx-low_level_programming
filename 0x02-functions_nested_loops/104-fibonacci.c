#include <stdio.h>
#include <math.h>
#include "main.h"

/**
 * main - start
 * Return:0
*/

int main(void)
{
	__uint64_t fib[100] = {0}, i;

	fib[0] = 1;
	fib[1] = 1;
	for (i = 0; i < 98; i++)
	{
		fib[i + 1] += fib[i];
		fib[i + 2] += fib[i];
	}
	putchar('1');
	for (i = 1; i < 98; i++)
	{
		printf(", %ld", fib[i]);
	}
	putchar('\n');
return (0);
}

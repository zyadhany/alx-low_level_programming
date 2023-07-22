#include <stdio.h>
#include <math.h>
#include "main.h"

/**
 * main - start
 * Return:0
*/

int main(void)
{
	long int fib[60] = {0}, i, summ = 0;

	fib[0] = 1;
	fib[1] = 1;
	for (i = 0; i <= 50; i++)
	{
		fib[i + 1] += fib[i];
		fib[i + 2] += fib[i];
	}
	for (i = 1; i <= 51; i++)
	{
		if (fib[i] < 4000000 && (fib[i] % 2) == 0)
		{
			summ += fib[i];
		}
	}
	printf("%ld\n", summ);
return (0);
}

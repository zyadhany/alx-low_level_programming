#include <stdio.h>
#include <math.h>
#include "main.h"

/**
 * main - start
 * Return:0
*/

int main(void)
{
	int summ = 0, i;

	for (i = 0; i <= 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			summ += i;
	}


	printf("%d", summ);
return (0);
}

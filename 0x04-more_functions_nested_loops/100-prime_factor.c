#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

/**
 * main - start
 * Return:0
*/

int main(void)
{
	long int i, j, mx = 0, n = 612852475143;

	for (i = 2; i * i <= n; i++)
	{
		while (n % i == 0)
		{
			n /= i;
			mx = i;
		}
	}
	if (n > mx)
		mx = n;

	printf("%ld\n", mx);

	return (0);
}

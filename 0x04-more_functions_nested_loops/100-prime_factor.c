#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int i, mx = 0, n = 612852475143;

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

#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, j, mx = 0;

	putchar('1');
	for (i = 1; i <= 100; i++)
	{
		j = 1;
		putchar(' ');
		if (i % 3 == 0)
		{
			printf("Fizz");
			j = 0;
		}

		if (i % 5 == 0)
		{
			printf("Buzz");
			j = 0;
		}

		if (j)
		{
			printf("%d", i);
		}
	}
	putchar('\n');

	return (0);
}

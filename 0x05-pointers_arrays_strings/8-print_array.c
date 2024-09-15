#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * @a: pointer to the array of integers
 * @n: number of elements to print
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		if (i)
		{
			_putchar(',');
			_putchar(' ');
		}
		_putchar(a[i] / 10 + '0');
		_putchar(a[i] % 10 + '0');
	}
	_putchar('\n');
}

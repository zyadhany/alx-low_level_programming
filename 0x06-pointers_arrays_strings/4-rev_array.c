#include "main.h"


/**
 * reverse_array - reverses the content of an array of integers
 * @a: pointer to the first integer in the array
 * @n: number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}

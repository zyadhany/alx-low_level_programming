#include "main.h"


/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to get square root of
 *
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
	int low, high, mid;

	low = 0;
	high = n;
	while (low <= high)
	{
		mid = (low + high) / 2;
		if (mid * mid == n)
		{
			return (mid);
		}
		else if (mid * mid < n)
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}

	return (-1);
}

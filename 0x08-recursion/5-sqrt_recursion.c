#include "main.h"


/**
 * get_sqrt - returns the natural square root of a number
 * @n: number to get square root of
 * @low: low end of search range
 * @high: high end of search range
 *
 * Return: square root of n
 */

int get_sqrt(int n, int low, int high)
{
	int mid;

	if (low <= high)
	{
		mid = (low + high) / 2;
		if (mid * mid == n)
		{
			return (mid);
		}
		else if (mid * mid < n)
		{
			return (get_sqrt(n, mid + 1, high));
		}
		else
		{
			return (get_sqrt(n, low, mid - 1));
		}
	}
	return (-1);
}


/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to get square root of
 *
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
	return (get_sqrt(n, 0, n));
}

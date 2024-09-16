#include "main.h"


/**
 * get_sqrt - returns the natural square root of a number
 * @n: number to get square root of
 * @cnt: low end of search range
 *
 * Return: square root of n
 */

int get_sqrt(int n, int cnt)
{
	if (cnt * cnt == n)
	{
		return (cnt);
	}
	else if (cnt * cnt > n)
	{
		return (-1);
	}
	return (get_sqrt(n, cnt + 1));
}


/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to get square root of
 *
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (get_sqrt(n, 1));
}

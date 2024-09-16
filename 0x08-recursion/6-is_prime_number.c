#include "main.h"


int check_prime(int n, int i);


/**
 * is_prime_number - checks if a number is prime
 * @n: number to check
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	return (check_prime(n, 2));
}

/**
 * check_prime - checks if a number is prime
 * @n: number to check
 * @i: divisor to check
 *
 * Return: 1 if prime, 0 otherwise
 */
int check_prime(int n, int i)
{
	if (i == n)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	return (check_prime(n, i + 1));
}

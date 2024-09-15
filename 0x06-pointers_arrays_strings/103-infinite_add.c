#include "main.h"

/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer to store the result
 * @size_r: size of the buffer
 *
 * Return: pointer to the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, carry = 0, sum = 0;

	while (n1[len1])
	{
		len1++;
	}
	while (n2[len2])
	{
		len2++;
	}

	r[--size_r] = '\0';
	len1--;
	len2--;

	while (len1 >= 0 || len2 >= 0)
	{
		sum = carry;

		if (len1 >= 0)
		{
			sum += n1[len1] - '0';
			len1--;
		}
		if (len2 >= 0)
		{
			sum += n2[len2] - '0';
			len2--;
		}

		carry = sum / 10;
		r[--size_r] = sum % 10 + '0';
	}

	if (carry)
		r[--size_r] = carry + '0';
	if (size_r < 0)
		return (0);

	return (r + size_r);
}

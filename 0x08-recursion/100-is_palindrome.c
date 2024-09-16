#include "main.h"


/**
 * check_palindrome - checks if a string is a palindrome
 * @s: string to check
 * @len: length of string
 *
 * Return: 1 if palindrome, 0 otherwise
 */
int check_palindrome(char *s, int len)
{
	if (len <= 1)
	{
		return (1);
	}
	else if (*s == *(s + len - 1))
	{
		return (check_palindrome(s + 1, len - 2));
	}
	else
	{
		return (0);
	}
}


/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to check
 *
 * Return: 1 if palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = 0;

	while (*(s + len))
	{
		len++;
	}
	if (len <= 1)
	{
		return (1);
	}
	return (check_palindrome(s, len));
}

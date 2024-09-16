#include "main.h"


/**
 * _get_len - gets the length of a string
 * @s: string to get length of
 *
 * Return: length of string
 */
int _get_len(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _get_len(s + 1));
	}
}


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
	int len = _get_len(s);

	if (len <= 1)
	{
		return (1);
	}
	return (check_palindrome(s, len));
}

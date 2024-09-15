#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: pointer to the string to print
 */
void puts_half(char *str)
{
	int len = 0;
	int i = 0;

	while (str[len])
	{
		len++;
	}

	for (i = (len + 1) / 2; i < len; i++)
	{
		_putchar(str[i]);
	}
}

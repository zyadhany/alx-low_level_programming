#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Entry point
 *@size: size of the array
 *@c: character
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *arr = malloc(sizeof(char) * size);

	if (arr)
	{
		for (int i = 0; i < size; i++)
		{
			arr[i] = c;
		}
	}
	return (arr);
}

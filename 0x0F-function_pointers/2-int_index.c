#include "function_pointers.h"


/**
 * int_index - searches for an integer
 * @array: array to search through
 * @size: size of the array
 * @cmp: pointer to the function to use
 * Return: index of the first element for which cmp does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	size_t i;

	if (!array || !cmp || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]))
			return (i);
	}

	return (-1);
}

#include "search_algos.h"

/**
 * linear_search - doing linear search
 * @array: pointer to array
 * @size: size of array
 * @value: value to search
 *
 * Return: the index found or -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}

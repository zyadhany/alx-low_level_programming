#include "search_algos.h"

/**
 * jump_search - doing linear search
 * @array: pointer to array
 * @size: size of array
 * @value: value to search
 *
 * Return: the index found or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, j, m;

	if (!array)
		return (-1);

	i = 0, m = sqrt(size);

	if (array[i] > value)
		return (-1);

	while (i + m < size && array[i + m] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		i += m;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", i, i + m);
	j = i + m;

	if (j > size)
		j = size;

	for (i = i; i < j; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}

	return (-1);
}

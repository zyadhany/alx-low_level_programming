#include "search_algos.h"

/**
 * binary_search - doing linear search
 * @array: pointer to array
 * @size: size of array
 * @value: value to search
 *
 * Return: the index found or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, l, r, at;

	if (!array)
		return (-1);

	l = 0, r = size - 1;

	while (l <= r)
	{
		at = (l + r) / 2;

		printf("Searching in array: ");
		
		for (i = l; i <= r; i++)
		{
			printf("%d", array[i]);

			if (i != r) printf(", ");
			else printf("\n");
		}
		if (array[at] == value) return (at);
		else if (array[at] > value) r = at - 1;
		else l = at + 1;
	}

	return (-1);
}


#include "search_algos.h"

/**
 * binary_search - Function to implement binary algorithm.
 * @array: An array to conduct the search in.
 * @size: Size of the array.
 * @value: The element to look for in the array.
 * Return: -1 if the array is NULL or element couldn't be found,
 * and index to the found element if found.
 */

int binary_search(int *array, size_t size, int value)
{
	size_t h = size - 1;
	size_t l = 0;
	size_t m;
	size_t i;

	if (!array || size == 0)
		return (-1);

	while (l <= h)
	{
		m = l + (h - l) / 2;

		printf("Search in array: ");
		for (i = l; i <= h; i++)
		{
			printf("%d", array[i]);
			if (i < h)
				printf(", ");
		}

		printf("\n");

		if (array[m] == value)
			return (m);
		else if (array[m] < value)
			l = m + 1;
		else
			h = m - 1;
	}

	return (-1);
}

#include "search_algos.h"

/**
 * linear_search - Function  to implement the linear search algorithm.
 * @array: Array to search element in.
 * @size: Size of the array provided.
 * @value: Element to look for in the array.
 * Return: -1 if element can't be found or array is NULL
 * And index to the found element if found.
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array || size == 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}

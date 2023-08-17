#include <stdlib.h>
/**
 * array_iterator - Executes function in an array
 * @array: Pointer to function
 * @size: Size of the array
 * @action: Pointer to needed function
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action) (int))
{
	size_t i;

	if (!array || !action)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

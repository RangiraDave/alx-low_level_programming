/**
 * int_index - Searches for an integer
 * @array: Pointer to array
 * @size: Size of array
 * @cmp: Pointer to function
 * Return: Index of maching element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}

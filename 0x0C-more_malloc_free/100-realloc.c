#include<stdlib.h>
/**
 * _realloc - Reallocates memory for pointer
 * @old_size: Size of first pointer
 * @new_size: Size of Second Pointer
 * Return: Address of old and new pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size > old_size)
	{
		new_size = old_size;
	}
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}

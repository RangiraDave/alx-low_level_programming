#include "main.h"

/**
 * seet_bit - Function to Modify a certain bit on an index.
 * @n: Pointer to UL integer to be modified.
 * @index: Index to which the needed bit is located.
 * Return: 1 for success and -1 for fail.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(*n) * 8 - 1)
		return (-1);
	*n = *n | (1UL << index);
	return (1);
}

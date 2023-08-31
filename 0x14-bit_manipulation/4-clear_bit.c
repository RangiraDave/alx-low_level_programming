#include "main.h"

/**
 * clear_bit - Function to change a bit at specified index. COOL wright!
 * @n: Pointer to given bit.
 * @index: Index of bit to be changed.
 * Return: 1 for success and -1 for failer.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(*n) * 8 - 1)
		return (-1);
	*n = *n & ~(1UL << index);
	return (1);
}

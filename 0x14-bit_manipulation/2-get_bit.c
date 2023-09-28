#include "main.h"

/**
 * get_bit - Function to retrive a bit on a given index
 * @n: UL int to be checked for the bit.
 * @index: The index where we want to look for the bit.
 * Return: bit or -1 for an error.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(n) * 8 - 1))
		return (-1);
	return ((n & (1UL << index)) ? 1 : 0);
}

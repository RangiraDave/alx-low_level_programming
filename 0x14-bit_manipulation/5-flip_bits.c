#include "main.h"

/**
 * flip_bits - Function that returns the number of bits to flip.
 * @n: First member int.
 * @m: Second int.
 * Return: The number of bits.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int present, total;
	int i, count;

	i = 63;
	total = n ^ m;
	count = 0;
	do {
		present = total >> i;
		if (present & 1)
			count++;
		i--;
	} while (i >= 0);

	return (count);
}

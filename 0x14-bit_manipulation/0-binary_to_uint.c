#include <stdlib.h>
#include "main.h"

/**
 * binary_to_uint - Function to turn binary into unsigned int
 * @b: Pointer to string of 1s and 0s.
 * Return: 0 or unsigned int.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int un = 0, k = 0, len = 0, p;

	if (!b)
		_putchar('0');
	while (b[len] != '\0')
		len++;
	p = len - 1;
	while (b[k] != '\0')
	{
		if (b[k] != '1' && b[k] != '0')
		{
			return (0);
		}
		un += ((b[k] - '0') << p);
		k++;
		p--;
	}
	return (un);
}

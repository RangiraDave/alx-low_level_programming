#include "main.h"

/**
 * get_endianness - Function to know what kind of Endian does your machine use.
 * Return: 1 for litle-endian and 0 for big-endian
 */

int get_endianness(void)
{
	unsigned int n = 1;
	char *byte_ptr = (char *) &n;

	return (*byte_ptr ? 1 : 0);
}

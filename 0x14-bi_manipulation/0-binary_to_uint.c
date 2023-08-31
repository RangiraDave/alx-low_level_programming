#include <stdlib.h>
#include <stdio.h>
/*#include <string.h>*/
#include "main.h"

/**
 * binary_to_uint - Function to turn binary into unsigned int
 * @b: Pointer to string of 1s and 0s.
 * Return: 0 or unsigned int.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int un = 0;
	int k = 0, p;

	p = strlen(b) - 1i;
	if (!b)
		return (0);
	while (b[k] != '\0')
	{
		if (b[k] != '1' && b[k] != '0')
			return (0);
		un += ((b[k] - '0') << p);
		k++;
		p--;
	}
	/*printf("%d\n",un);*/
	return (un);
}

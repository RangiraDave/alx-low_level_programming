#include "main.h"
/**
 * sqroot - Checks for square root
 * @i: To be compared to base
 * @j: Base number
 * Return: The natural number of input & if not, -1.
*/

int sqroot(int i, int j)
{
	if (i * i == j)
		return (i);
	if (i * i > j)
		return (-1);
	return (sqroot(i + 1, j));
}

int _sqrt_recursion(int n)
{
	return (sqroot(1, n));
}

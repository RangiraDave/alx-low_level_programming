#include "main.h"
/**
 * swap_int - swaps two integers
 * @a: First pointer
 * @b: Second pointer
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int T;

	T = *a;
	*a = *b;
	*b = T;
}

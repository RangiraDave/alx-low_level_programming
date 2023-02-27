#include "main.h"
/**
 * swap_int - swaps two integers
 * @a: First pointer
 * @b: Second pointer
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	*a = b;
	*b = a;
}

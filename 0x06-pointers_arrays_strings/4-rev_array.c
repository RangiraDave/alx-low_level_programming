#include "main.h"

/**
 * reverse_array - Reverses elements in an array
 * @a: pointer to array
 * @n: Size of The array
 * Return: Nothing
 */
void reverse_arry(int *a, int n)
{
	int i, T;

	for (i = 0; i < n / 2; i++)
	{
		T = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = T;
	}
}

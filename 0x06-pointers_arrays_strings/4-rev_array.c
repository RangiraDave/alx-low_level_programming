#include "main.h"
#include <stdlib.h>
/**
 * reverse_array - Reverses elements in an array
 * @a: pointer to array
 * @n: Size of The array
 * Return: Nothing
 */
void reverse_arry(int *a, int n)
{
	int i, j;
	int *T = malloc( n * sizeof(int));

	for (i = 0; i < n; i++)
		T[i] = a[i];
	for (j = n - 1; j >= 0; j--)
		a[j] = T[j];
	free(T);
}

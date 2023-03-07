#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - Returns sums of diagonals of matrix
 * @a: Pointer to array
 * @size: The variable size of array
 * Return: None
 */
void print_diagsums(int *a, int size)
{
	int i, j;
	int k, l;

	k = l = 0;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				k += *(a + i * size + i);
			if (i + j == size - 1)
				l += *(a + i * size + (size - i - 1));
		}
	}
	printf("%d, %d\n", k, l);
}

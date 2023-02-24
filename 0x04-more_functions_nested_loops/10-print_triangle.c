#include "main.h"
/**
 * print_triangle - displays triangula # s
 * @size: The only variable
 */
void print_triangle(int size)
{
	int i, j, n;

	for (i = 1; i <= size; i++)
	{
		for (n = 1; n <= size - i; n++)
		{
			_putchar(' ');
		}
		for (j = 1; j <= i; j++)
			_putchar('#');
		_putchar('\n');
	}
}

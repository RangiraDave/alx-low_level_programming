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
		for (n = 1; n <= size - 1; j++)
		{
			_putchar(' ');
		}
		for (j = 1; j <= size; j++)
			_putchar('#');
		_putch('\n');

	}
}

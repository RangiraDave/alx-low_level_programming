#include "main.h"
/**
 * print_triangle - displays triangula # s
 * @size: The only variable
 */
void print_triangle(int size)
{
	if (size != 0)
	{
		int i, j, n;

		for (i = 0; i < size; i++)
		{
			for (n = 0; n < size - i; n++)
			{
				_putchar(' ');
			}
			for (j = 0; j <= i; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}

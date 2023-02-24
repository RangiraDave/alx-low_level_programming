#include "main.h"
/**
 * print_square - to print square if #
 * @size: To show the size of the square
 *
 */
void print_square(int size)
{
	if (size > 0)
	{
		int i, j;

		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}

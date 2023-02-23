#include "main.h"
/**
 * more_numbers - to print them 10 X
 *
 * Return: Always 0 (Success)
 *
 */
void more_numbers(void)
{
	int i;
	int j = 0;

	while (j <= 10)
	{
		for (i = 0; i < 15; i++)
			_putchar(i + '0');

		_putchar('\n');
		j++;
	}
	_putchar('\n');
}

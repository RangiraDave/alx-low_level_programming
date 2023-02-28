#include "main.h"
/**
 * puts_half - displays half of a given string
 * @str: Pointer to variable
 */
void puts_half(char *str)
{
	int n, i;

	n = 0;
	while (*str)
	{
		n++;
		str++;
	}
	if (n % 2 == 0)
	{
		for (i = 0; i < n / 2; i++)
			_putchar(*(str - n / 2 + i));
	}
	else
	{
		for (i = (n - 1) / 2 + 1; i < n; i++)
			_putchar(*(str - n / 2 + i));
	}
	_putchar('\n');
}

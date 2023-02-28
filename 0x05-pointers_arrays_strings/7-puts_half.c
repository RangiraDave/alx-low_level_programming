#include "main.h"
/**
 * puts_half - displays half of a given string
 * @str: Pointer to variable
 */
void puts_half(char *str)
{
	int n;

	n = 0;
	while (*str)
	{
		*str++;
		n++;
	}
	if (n % 2 == 0)
	{
		for (i = 0; i <= n / 2; i++)
			_putchar(*str++);
	}
	else
	{
		for (i = 0; i <= (n - 1) / 2; i++)
			_putchar(*str++);
	}
	_putchar('\n');
}

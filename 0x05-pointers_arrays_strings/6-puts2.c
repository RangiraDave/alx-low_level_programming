#include "main.h"
/**
 * puts2 - prints every other char of string
 * @str: Pointer
 */
void puts2(char *str)
{
	int i, j;

	j = 0;
	while (*str)
	{
		j++;
	}
	for (i = 0; i <= j; i++)
	{
		if (i % 2 == 0)
			_putchar(*str);
	}
}

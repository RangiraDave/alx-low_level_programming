#include "main.h"
/**
 * puts2 - prints every other char of string
 * @str: Pointer
 */
void puts2(char *str)
{
	int j;

	j = 0;
	while (*str)
	{
		if (j % 2 == 0)
			_putchar(*str++);
		else
			continue;
		j++;
	}
	_putchar('\n');
}

#include "main.h"
/**
 * print_rev - prints reversed string
 * @s: pointer holding string
 */
void print_rev(char *s)
{
	while (*s--)
	{
		_putchar(*s++);
	}
	_putchar('n');
}

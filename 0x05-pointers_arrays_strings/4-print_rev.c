#include "main.h"
/**
 * print_rev - prints reversed string
 * @s: pointer holding string
 */
void print_rev(char *s)
{
	int i, j;
	char *Temp;

	i = 0;
	Temp = s;
	while (*s++)
	{
		i++;
		Temp++;
	}
	for (j = 0; j < i + 1; j++)
	{
		Temp--;
		_putchar(*Temp);
	}
	_putchar('\n');
}

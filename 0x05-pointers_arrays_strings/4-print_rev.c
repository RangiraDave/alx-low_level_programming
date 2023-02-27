#include "main.h"
/**
 * print_rev - prints reversed string
 * @s: pointer holding string
 */
void print_rev(char *s)
{
	int i, j;
	char *Temp;

	i = -1;
	Temp = s;
	while (*s++)
	{
		++Temp;
		i++;
	}
	for (j = 0; j < i + 1; j++)
	{
		Temp--;
		_putchar(*Temp);
	}
	_putchar('\n');
}

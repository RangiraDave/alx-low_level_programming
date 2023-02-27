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
	for (j = 0; j <= i; j++)
	{
		_putchar(*Temp);
		Temp--;
	}
	_putchar('\n');
}

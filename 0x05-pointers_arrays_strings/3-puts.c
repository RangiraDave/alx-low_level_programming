#include "main.h"
/**
 * _puts - prints string
 * @str: point
 */
void _puts(char *str)
{
	int i, j;

	i = 0;
	while (*str++)
		i++;
	for (j = 0; j <= i; j++)
		_putchar(*str[j]);
}

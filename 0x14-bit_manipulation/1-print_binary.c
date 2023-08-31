#include <stdio.h>
#include "main.h"

/**
 * print_binary - Function to print binary numbers for entered decimal.
 * @n: unsigned decimal to be checked.
 * Return: Binary generated else 0.
 */

void print_binary(unsigned int n)
{
	if (!n)
	{
		_putchar('0');
		return;
	}
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}

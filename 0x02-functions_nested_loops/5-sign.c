#include "main.h"
/**
 * print_sign - check the code.
 *
 * @n: Variable
 *
 * Return: Always 0.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		_putchar('1' + '0');
	}
	else if (n == 0)
	{
		_putchar('0' + '0');
		_putchar('0' + '0');
	}
	else
	{
			_putchar('-');
			_putchar('1' + '0');
	}
}

#include "main.h"
/**
 * print_sign.c - check the code.
 * Return: Always 0.
 */

int print_sign(int n)
{
	if (n == 0)
	{
		return (0);
	}
	else if (n < 0)
	{
		return ('-');
	}
	else
	{
		return ('+');
	}
}

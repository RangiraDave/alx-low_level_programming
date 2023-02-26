#include "main.h"
/**
 * print_last_digit - look for last digit
 * @n: variable
 * Return: Always 0
 */
int print_last_digit(int n)
{
	int m;

	if (n == 0)
		return (0);
	while (n != 0)
	{
		n = (n / 10);
		m = (n * 10);
	}
	return (m);
}

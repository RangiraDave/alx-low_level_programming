#include "main.h"
/**
 * print_last_digit - look for last digit
 * @d: variable
 * Return: Always 0
 */
int print_last_digit(int n)
{
	int m;

	while (n != 0)
	{
		n = n / 10;
		m = n * 10;
	}
	return (m);
}

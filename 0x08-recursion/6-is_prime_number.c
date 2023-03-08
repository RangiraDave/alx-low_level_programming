#include "main.h"
/**
 * is_prime_number - Checks for prime number
 * @n: Number to be checked
 * Return: True or False
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	else if (n < 0)
		return (0);
	else if (n % 1 == 0 && n % n == 0)
		return (1);
	else
		return (0);
}

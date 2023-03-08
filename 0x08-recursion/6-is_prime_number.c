#include "main.h"
/**
 * is_prime_number - Checks for prime number
 * @n: Number to be checked
 */
int is_prime_number(int n)
{
	if (n % 1 == 0 && n % n == 0)
		return (1);
	return (0);
}

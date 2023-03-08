#include "main.h"
/**
 * factorial - calculates the fuctorial of a number
 * @n: Number to be culculated
 * Return: The factorial of the number
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
	return (n * factorial(n - 1));
}

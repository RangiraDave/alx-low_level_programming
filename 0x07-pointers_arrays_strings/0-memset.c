#include "main.h"
/**
 * _memset - Sets a constat adress to an int variable
 * @s:pointer to a variable
 * @b: Variable to hold an address of unsigned int
 * @n: variable to set memory to.
 * Return: The memory of n.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *T;

	T = s;
	for (i = 0; i < n; i++)
	{
		*(T + i) = b;
	}
	return (s);
}

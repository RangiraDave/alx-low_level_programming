#include "main.h"
/**
 * _islower - check the code
 *
 * @c: Parameter
 *
 * Return: Always 0.
 */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

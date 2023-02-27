#include "main.h"
/**
 * _strlen - Displays the length of a string
 * @s: The pointer to use
 * Return: Always 0 (Success)
 */
int _strlen(char *s)
{
	int i;

	while (*s != 0)
	{
		++i;
	}
	return (i);
}

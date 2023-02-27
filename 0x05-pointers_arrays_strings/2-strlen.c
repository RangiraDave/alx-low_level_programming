#include "main.h"
/**
 * _strlen - Displays the length of a string
 * @s: The pointer to use
 * Retern: Always 0 (Success)
 */
int _strlen(char *s)
{
	int i;

	while (*s != 0)
	{
		i++;
		*s--;
	}
	return (i);
}

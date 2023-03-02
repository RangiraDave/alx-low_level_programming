#include "main.h"
/**
 * string_toupper - Changes every lower letter in string to upper case
 * @c: pointer to variable
 * Return: Chars in Upper case letters
 */
char *string_toupper(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] >= 'a' && c[i] <= 'z')
		{
			c[i] = c[i] - ('a' - 'A');
		}
	}
	return (c);
}

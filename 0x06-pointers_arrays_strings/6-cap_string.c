#include "main.h"
/**
 * cap_string - capitalises every start of a string
 * @c: pointer to string
 * Return: Capitalized string
 */
char *cap_string(char *c)
{
	int i;
	
	if (c[0] >= 'a' && c[0] <= 'z')
		c[0] = c[0] - ('a' - 'A');

	for (i = 1; c[i] != '\0'; i++)
	{
		if (c[i - 1] == ' ' || c[i - 1] == '\t')
		{
			if (c[i] >= 'a' && c[i] <= 'z')
				c[i] = c[i] - ('a' - 'A');
		}
		if (c[i - 1] == '\n' || c[i - 1] == ',')
		{
			if (c[i] >= 'a' && c[i] <= 'z')
				c[i] = c[i] - ('a' - 'A');
		}
		if (c[i - 1] == ';' || c[i - 1] == '.')
		{
			if (c[i] >= 'a' && c[i] <= 'z')
				c[i] = c[i] - ('a' - 'A');
		}
		if (c[i - 1] == '!' || c[i - 1] == '?')
		{
			if (c[i] >= 'a' && c[i] <= 'z')
				c[i] = c[i] - ('a' - 'A');
		}
		if (c[i - 1] == '"' || c[i - 1] == '(')
			if (c[i] >= 'a' && c[i] <= 'z')
				c[i] = c[i] - ('a' - 'A');
		if (c[i - 1] == ')')
		{
			if (c[i] >= 'a' && c[i] <= 'z')
				c[i] = c[i] - ('a' - 'A');
		}
	}
	return c;
}

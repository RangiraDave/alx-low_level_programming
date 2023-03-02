#include "main.h"
/**
 * cap_string - capitalises every start of a string
 * @c: pointer to string
 * Return: Capitalized string
 */
char *cap_string(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] == '.' || (c[i] == '.' && c[i + 1] == ' ') || (c[i] == '.' && c[i + 1] == '\n') || c[i] =='.' || c[i] == ' ' || c[i] == '\t' || c[i] =='\n' || c[i] == ',' || c[i]  == ';' || c[i] == '.' || (c[i] == '!' && c[i + 1] == ' ') || c[i] == '!' || c[i] == '?' || c[i] == '"' || c[i] == '(' || c[i] == ')' || c[i] == '{' || c[i] == '}')
			c[i + 1] = c[i + 1] - ('a' - 'A');
		else
			return (&c[i]);
	}
	return (c);
}

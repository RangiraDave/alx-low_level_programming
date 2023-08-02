#include "main.h"
/**
 * is_palindrome - Checks if string is palindrome
 * @s: pointer to the string
 * Return: 0 or 1
 *
 */
int is_palindrome(char *s)
{
	int i;

	i = 0;
	if (*s != '\0')
		i++;
	else if (*s == '\0' && *s == 's[i - 1]')
		return (1);
	else
		return (-1);
	return (is_palindrome(s + 1));
}

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
	if (*s == '\0')
		return (1);
	is_palindrome(s - 1);
	if (&s[i] == is_palindrome(s - 1))
		return (1);
}

#include "main.h"
/**
 * _strchr - Locates a char in a string
 * @s: poiter to string
 * @c: char to be checked
 * Return: Pointer to ferst occurence
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return ('\0');
}

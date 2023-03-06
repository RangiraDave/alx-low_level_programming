#include "main.h"
/**
 * _strchr - Locates a char in a string
 * @s: poiter to string
 * @c: char to be checked
 * Return: Pointer to ferst occurence
 */
char *_strchr(char *s, char c)
{
	char *T = s;

	while (*T != '\0')
	{
		if (*T == c)
			return (T);
		T++;
	}
	T = '\0';
	return (T);
}

#include "main.h"
/**
 * int wildcmp - prints 1 if identical & 0 otherwise
 * @s1: First string
 * @s2: Second string
 * Return: 1 or 0
 */
int wildcmp(char *s1, char *s2)
{
	i = 0;
	if (s1[i] == s2[i])
		return (1);
	else
		return (0);
	return (wildcmp(s1[i + 1], s2[i + 1]));
}

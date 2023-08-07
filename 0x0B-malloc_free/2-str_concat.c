#include<stdlib.h>

/**
 * str_concat - To concatinate two strings
 * @s1: Pointer to first string
 * @s2: Pointer to second string
 * Return: Concatinated string
 */

char *str_concat(char *s1, char *s2)
{
	char *sum = '\0';

	sum = malloc(sizeof(s1) + sizeof(s2));
	if (*s1 == '\0' && *s2 == '\0')
		sum = '\0';
	else if (*s1 == '\0' && *s2 != '\0')
		sum = s2 + '\0';
	else if (*s1 != '\0' && *s2 == '\0')
		sum = s1 + '\0';
	else if (*s1 != '\0' && *s2 != '\0')
	{
		sum += s1 + s2;
	}
	return (sum);
	free(sum);
}

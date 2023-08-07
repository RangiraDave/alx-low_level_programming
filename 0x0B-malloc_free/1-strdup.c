#include<stdlib.h>

/**
 * _strdup - Returns newly created string(duplicated)
 * @str: pointer to new string
 * Return: Duplicated string
 */

char *_strdup(char *str)
{
	char *s;

	if (str == NULL)
		return (NULL);

	s = malloc(sizeof(str));
	s = str;
	if (s == NULL)
		return (NULL);
	return (s);
}

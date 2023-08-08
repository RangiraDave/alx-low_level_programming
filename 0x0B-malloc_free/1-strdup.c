#include<stdlib.h>

/**
 * _strdup - Returns newly created string(duplicated)
 * @str: pointer to new string
 * Return: Duplicated string
 */

char *_strdup(char *str)
{
	char *s;

	int i = 0;
	if (str == NULL)
		return (NULL);

	s = malloc(sizeof(str));
	while (str[i])
		s[i] = str[i];
	if (s == NULL)
		return (NULL);
	return (s);
}

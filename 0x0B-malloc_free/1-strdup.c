#include<stdlib.h>

/**
 * _strdup - Returns newly created string(duplicated)
 * @str: pointer to new string
 * Return: Duplicated string
 */

char *_strdup(char *str)
{
	char *s;

	int i, len = 0;

	if (str == NULL)
		return (NULL);
	while (str[len] != '\0')
		len++;
	s = malloc((sizeof(len) + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		s[i] = str[i];
	}
	s[i] = '\0';
	return (s);
}

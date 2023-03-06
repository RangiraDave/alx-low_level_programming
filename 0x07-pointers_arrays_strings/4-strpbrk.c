#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - Searches for set of chars in string
 * @s: String to search in
 * @accept: Set to search
 * Return: Founded string
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j, n = 0;
	char *T = NULL;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				T = &s[i];
			}
			n++;
			break;
		}
		if (T != NULL)
			break;
	}
	return (T);
}

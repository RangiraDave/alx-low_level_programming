#include "main.h"
/**
 * _strstr - Locates sub string in an array
 * @haystack: Points to string to search in
 * @needle: Points to the substring to be located
 * Return: Pointer to located s.string
 */
char *_strstr(char *haystack, char *needle)
{
	char *T;
	int i = 0, j, n = 0;

	while (haystack[i] != '\0')
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i] == needle[j])
				T = &haystack[i];
			n++;
			break;
		}
		i++;
	}
	return (T);
}

#include "main.h"
/**
 * _strstr - Locates sub string in an array
 * @haystack: Points to string to search in
 * @needle: Points to the substring to be located
 * Return: Pointer to located s.string
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j;

	while (haystack[i] != '\0')
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (needle[j] == '\0')
			return (&haystack[i]);
		i++;
	}
	return ('\0');
}

#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: The pointer to destination string
 * @src: Points to the source string
 * @n: Counts the size of string
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (n = 0; dest[n] != '\0'; n++)
		;
	for (j = 0; dest[j] != '\0'; j++)
	{
		dest[j] = src[n];
	}
	dest[j + n] += '\0';
	return (dest);
}

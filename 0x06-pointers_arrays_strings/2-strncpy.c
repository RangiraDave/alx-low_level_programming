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

	for (j = 0; j < n && dest[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}
	for (; j < n; j++)
		dest[j] = '\0';
	return (dest);
}

#include "main.h"
/**
 * _strncat - concatenates src with n size
 * @src: pointer to second string
 * @dest: pointer to first string
 * @n: The size of the string
 * Return: dest as a resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; j < n && src[j] != '\0'; j++)
		dest[i + j] = src[j];
	dest[i + j] = '\0';
	return (dest);
}

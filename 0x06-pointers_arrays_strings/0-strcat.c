#include "main.h"
/**
 * _strcat - concatinates two strings
 * @dest: points to the string to append to
 * @src: points to the string to be appended
 * Return: The hole string dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}

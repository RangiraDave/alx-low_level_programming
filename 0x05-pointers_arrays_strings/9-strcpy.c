#include "main.h"
/**
 * _strcpy - To copy a string from a pointer
 * @dest: destination of string
 * @src: source of string
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return dest;
}


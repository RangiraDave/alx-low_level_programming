#include "main.h"
/**
 * _strcat - concatinates two strings
 * @dest: points to the string to append to
 * @src: points to the string to be appended
 * Return: The hole string dest
 */

int _putchar(char c);
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0, n;

	while (*src)
	{
		src++;
		j++;
	}
	while (*dest)
	{
		dest++;
		i++;
		if (*dest == '\0')
		{
			for (n = 0; n < i + j; n++)
				*dest += *src;
		}
	}
	*dest += '\0';
	return (dest);
}

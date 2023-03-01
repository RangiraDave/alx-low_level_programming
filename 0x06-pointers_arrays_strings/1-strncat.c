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
	int t;

	while (*src)
	{
		src++;
	}
	while (*dest)
	{
		dest++;
		if (*dest == '\0')
		{
			for (t = 0; t <= n; t++)
			{
				*dest += *src;
			}
			return (dest);
		}
	}
	*dest += '\0';
	return (dest);
}

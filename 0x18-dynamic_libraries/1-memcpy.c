#include "main.h"
/**
 * _memcpy - copies n memory bytes from src to dest
 * @dest: Where to past
 * @src: Address to be copied
 * @n: number of bytes to be copied
 * Return: Pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *T = dest;

	for (i = 0; i < n; i++)
	{
		T[i] = src[i];
	}
	return (T);
}

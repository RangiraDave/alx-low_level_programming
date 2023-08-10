#include <stdlib.h>
/**
 * _calloc - Allocates memory
 * @nmemb: Pointer to an int
 * @size: Pointer to int
 * Return: Pointer to an array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
       	char *p;
	unsigned int ct;

	ct = 0;
	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	while (ct < nmemb * size)
	{
		p[ct] = 0;
		ct++;
	}
	return (p);
}

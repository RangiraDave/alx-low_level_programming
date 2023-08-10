#include<stdlib.h>
/**
 * malloc_checked - allocates memory and exits
 * @b: counter
 * Return: Address of allocated memory
 */
void *malloc_checked(unsigned int b)
{
	char *temp;

	temp = malloc(b);
	if (temp == NULL)
		exit(98);
	return (temp);
}

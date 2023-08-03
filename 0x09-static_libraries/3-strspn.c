#include "main.h"
/**
 * _strspn - Calculates the number of chars in string A and not in B.
 * @s: Points to first string
 * @accept: Points to second string
 * Return: Unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j, p = 0;

	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				p++;
				break;
			}
		}
		if (accept[j] == '\0')
			break;
		i++;
	}
	return (p);
}

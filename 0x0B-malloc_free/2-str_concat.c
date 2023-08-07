#include<stdlib.h>

/**
 * str_concat - To concatinate two strings
 * @s1: Pointer to first string
 * @s2: Pointer to second string
 * Return: Concatinated string
 */

char *str_concat(char *s1, char *s2)
{
	char *sum;
	long unsigned int len1, len2, i = 0;
	
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
	{
		i++;
		len1 = i;
	}
	while (s2[i] != '\0')
	{
		i++;
		len2 = i;
	}
	sum = malloc((len1 + len2) * sizeof(char));
	for (i = 0; i < len1; i++)
		sum[i] = s1[i];
	for (i = 0; i < len1 + len2; i++)
		sum[len1 + i] = s2[i];
	sum[len1 + len2] = '\0';
	return (sum);
}

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

	unsigned int long len1 = 0, len2 = 0, i = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	sum = malloc((len1 + len2) * sizeof(char));
	if (s1 == NULL)
		sum = s1;
	if (s2 == NULL)
		sum = s2;
	if (s1 == NULL && s2 == NULL)
		sum = "";
	for (i = 0; i < len1; i++)
		sum[i] = s1[i];
	for (i = 0; i < len1 + len2; i++)
		sum[len1 + i] = s2[i];
	sum[len1 + len2] = '\0';
	return (sum);
}

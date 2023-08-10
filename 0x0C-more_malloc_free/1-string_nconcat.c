#include<stdlib.h>
/**
 * string_nconcat - Concatinates s1 with n_s2
 * @s1: Pointer to first string
 * @s2: Pointer to second string
 * @n: Counter
 * Return: Concatinated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *Temp;

	unsigned int num = 0, T, i, a, b;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (a = 0; s1[a] != '\0'; a++);
	for (b = 0; s2[b] != '\0'; b++);
	if (n >= b)
	{
		T = n;
		Temp = malloc(sizeof(char *) * (a + T + 1));
	}
	else
		Temp = malloc(sizeof(char *) * (a + n + 1));
	if (Temp == NULL)
		return (NULL);
	for (i = 0; i < a; i++)
	{
		Temp[num] = s1[i];
		num++;
	}
	for (i = 0; i < n; i++)
	{
		Temp[num++] = s2[i];
	}
	num = a + b;
	Temp[num] = '\0';
	return (Temp);
}

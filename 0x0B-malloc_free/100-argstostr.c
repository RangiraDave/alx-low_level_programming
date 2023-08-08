#include<stdlib.h>
/**
 * argtostr - Concatinates two passed strings
 * @ac: Counter
 * @av: Pointer to string
 * Return: Concatinated arguments
 */
char *argstostr(int ac, char **av)
{
	char *temp;

	int i, j, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		char *T = av[i];
		while (*T)
		{
			len++;
			T++;
		}
	}
	temp = malloc((len + ac + 1) * sizeof(char));
	if (temp == NULL)
		return (NULL);
	len = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, len++)
			temp[len] = av[i][j];
		temp[len++] = '\n';
	}
	temp[len] = '\0';
	return (temp);
}

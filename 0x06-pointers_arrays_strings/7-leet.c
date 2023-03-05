#include "main.h"
/**
 * leet - encode string in 1337
 * @c: poiter to the string
 * Return: Encoded characters
 */
char *leet(char *c)
{
	int i, j = 0;
	char *code = "4433007711";
	char *Lee = "AaEeOoTtLl";

	while (c[j] != '\0')
	{
		for (i = 0; Lee[i] != '\0'; i++)
		{
			if (c[j] == Lee[i])
			{
				c[j] = code[i];
			}
		}
		j++;
	}
	return (c);
}

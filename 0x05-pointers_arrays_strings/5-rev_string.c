#include "main.h"
/**
 * rev_string - Just to reverse a given string
 * @s: pointer to a variable
 */
void rev_string(char *s)
{
	int i, j;
	char *Temp;

	i = -1;
	Temp = s;
	while (*s++)
	{
		++Temp;
		i++;
	}
	for (j = 0; j <= i; j++)
	{

		Temp--;
		_putchar(*Temp);
	}
}

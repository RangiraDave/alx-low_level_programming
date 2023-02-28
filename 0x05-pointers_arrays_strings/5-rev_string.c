#include "main.h"
/**
 * rev_string - Reverses a string in place
 * @s: Pointer to the string to reverse
 */
void rev_string(char *s)
{
	int len = 0;
	char *end, tmp;

	/* Find the end of the string */
	end = s;
	while (*end != '\0')
	{
		len++;
		end++;
	}

	/* Swap characters from opposite ends of the string */
	end--;
	while (s < end)
	{
		tmp = *s;
		*s = *end;
		*end = tmp;
		s++;
		end--;
	}
}

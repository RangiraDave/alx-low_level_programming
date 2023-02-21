#include "stdio.h"
#include <ctype.h>
/**
 * main - check the code.
 * Return: Always 0.
 */
char _islower(char n)
{
	if (islower(n))
		return (1);
	else
		return (0);
}
int main(void)
{
	char r;
	r = _islower('H');
	putchar(r + '0');
	r = _islower('o');
	putchar(r + '0');
	r = _islower(108);
	putchar(r + '0');
	putchar('\n');
	return (0);
}

#include <stdio.h>
#include <ctype.h>
/**
 * main - check the code.
 * Return: Always 0.
 */
char _isalpha(char n)
{
	if (isalpha(n))
		return (1);
	else
		return (0);
}
int main(void)
{
    char r;

    r = _isalpha('H');
    putchar(r + '0');
    r = _isalpha('o');
    putchar(r + '0');
    r = _isalpha(108);
    putchar(r + '0');
    r = _isalpha(';');
    putchar(r + '0');
    putchar('\n');
    return (0);
}

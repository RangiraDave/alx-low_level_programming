#include "main.h"
/**
 * print_alphabet - check the code
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char i;
	int n;

	for (n = 0; n <= 9; n++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}

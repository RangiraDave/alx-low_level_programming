#include "main.h"
/**
 *print_alphabet - to print lowecase lettles
 *
 * Return: Always 0.
 */
void print_alphabet();

void print_alphabet()
{
	char i;
	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	putchar('\n');
}

#include "stdio.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_alphabet()
{
	char i;
	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	putchar('\n');
}
int main(void)
{
    print_alphabet();
    return (0);
}

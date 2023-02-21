#include "stdio.h"
/**
 * main - check the code.
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	char a;
	int i;

	for (i = 0; i <= 9; i++)
	{
		for (a = 'a'; a <= 'z'; a++)
			putchar(a);
		putchar('\n');
	}
}
int main(void)
{
    print_alphabet_x10();
    return (0);
}  

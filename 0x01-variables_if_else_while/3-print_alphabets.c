#include <stdio.h>
#include <ctype.h>
/**
 * main - start point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char Ch;
	char Ch1;

	for (Ch = 'A'; Ch <= 'Z'; Ch++)
	{
		Ch1=tolower(Ch);
		putchar(Ch);
		putchar(Ch1);
	}
	putchar('\n');
	return (0);
}

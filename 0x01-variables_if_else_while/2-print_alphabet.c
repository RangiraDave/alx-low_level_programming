#include <stdio.h>
/**
 *main - entry point
 *return: always 0 (success)
 */
int main()
{
	char ch;
	for(ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
		putchar('\n');
	}
	return 0;
}

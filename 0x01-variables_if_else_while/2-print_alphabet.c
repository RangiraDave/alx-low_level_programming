#include <stdio.h>
/**
 *main - entry point
 *return: always 0 (success)
 */
int main()
{
	for(int ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	char A = '	';
	putchar(A);
	return 0;
}

#include <stdio.h>
/**
 * main - entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
        int i;
        int j;
	int k;

        for (i = 0; i <= 9; i++)
        {
                for (j = i + 1; j <= 9; j++)
                {
			for (k = 0; k <= j; k++)
			{
                        	if ((i != j) != k)
                        	{
                                	putchar('0' + i);
					putchar('0' + j);
					putchar('0' + k);
                        	}
                        	if (i == 7 && j == 8 && k == 9)
                               		continue;
                        	if (i < 9)
                        	{
                                	putchar(',');
                                	putchar(' ');
                        	}
			}
                }
        }
        putchar('\n');
        return (0);
}


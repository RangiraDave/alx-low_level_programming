#include <stdio.h>
#define true 1
#define false 0
/**
 * main - Starting point
 *
 * Return: Always 0
 *
 */
int main(void)
{
	int i = 1, j = 2;
	int t, k;

	printf("1, 2, ");
	for (t = 0; t < 5; t++)
	{
		while (true)
		{
			k = i + j;
			i = j;
			j = k;
			printf("%i", k);
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}

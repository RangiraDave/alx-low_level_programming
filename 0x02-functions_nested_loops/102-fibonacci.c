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
	double k;

	printf("1, 2, ");
	while (k <= 20365011074)
	{
		k = i + j;
		i = j;
		j = k;
		printf("%d", k);
		printf(", ");
	}
	printf("\n");
	return (0);
}

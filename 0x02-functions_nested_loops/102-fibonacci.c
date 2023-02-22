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
	int k, t;

	printf("1, 2, ");
	while (t <= 50)
	{
		k = i + j;
		i = j;
		j = k;
		if (t == 50)
			printf("%i", k);
		else
			printf("%i", k);
		t++;
	}
	printf("\n");
	return (0);
}

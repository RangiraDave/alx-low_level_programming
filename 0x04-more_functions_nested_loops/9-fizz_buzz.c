#include <stdio.h>
/**
 * main - checks the codes
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf(" FizzBuzz");
		else if (i % 3 == 0)
			printf(" Fizz");
		else if (i % 5 == 0)
			printf(" Buzz");
		else if (i > 1)
			printf(" %i", i);
		else
			printf("%i", i);
	}
	printf("\n");
}

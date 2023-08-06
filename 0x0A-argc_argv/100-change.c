#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
/**
 * main - Main function
 * @argc: Counter
 * @argv: Pointer
 * Return: Number of minimum coins for change
 */
int main (int argc, char *argv[])
{
	int i;
	int cents[] = {25, 10, 5, 2, 1};
	int N_cents = 0;
	int amount;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	amount = atoi(argv[1]);
	if (amount < 0)
		printf("0\n");
	else
	{
		for (i = 0; i < 5; i++)
		{
			while (amount >= cents[i])
			{
				amount -= cents[i];
				N_cents++;
			}
		}
		printf("%d\n", N_cents);
	}
	return (0);
}

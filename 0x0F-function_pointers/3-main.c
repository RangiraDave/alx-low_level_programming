#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - Main function
 * @argc: Counter
 * @argv: Pointer to argment
 * Return: Always 0
 */
int main (int argc, char *argv[])
{
	char O[] = {'+', '-', '*', '/', '%'};
	int i, a, b, Ans;

	i = 0;
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	f(a, b);
	if (argv[2][0] != O[i] && argv[2][1] == '\0')
		i++;
	Ans = f(a, b);
	printf("%d\n", Ans);
	return (0);
}

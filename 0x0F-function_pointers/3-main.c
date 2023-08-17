#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - Main function
 * @argc: Counter
 * @argv: Pointer to argment
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int a, b;
	int (*ans)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	ans = get_op_func(argv[2]);
	if (ans == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	printf("%d\n", ans(a, b));
	return (0);
}

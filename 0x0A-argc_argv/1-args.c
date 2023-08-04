#include<stdio.h>
#include<stdlib.h>

/**
 * main - Main function
 * @argc: Counter
 * @argv: Pointer
 * Return: The name of a program
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (argv[argc])
	{
		i++;
	}
	printf("%d\n", argc - 1);
	return (0);
}

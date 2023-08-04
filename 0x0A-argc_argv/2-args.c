#include<stdio.h>
#include<stdlib.h>
/**
 * main - Main funcyion
 * @argc: Counts nbr of strings
 * @argv: Pointer to string
 * Return: Arguments received by prog
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

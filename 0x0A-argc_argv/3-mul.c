#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

/**
 * check_for_digit - To check whether char is digit
 * @str: pointer to char in argv string
 * main - Main
 * @argc: Counter
 * @argv: Pointer
 * Return: Product
 */

int check_for_digit(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		if (!isdigit((unsigned char) str[i]))
			return (0);
	return (1);
}

int main(int argc, char **argv)
{
	int pro = 1;

	if (argc > 2 && check_for_digit(argv[1]) && check_for_digit(argv[2]))
	{
		pro = atoi(argv[argc - 2]) * atoi(argv[argc - 1]);
		printf("%d\n", pro);
	}
	else if (argc == 1 || argc == 2 || argc == 3 || !check_for_digit(argv[1]) || !check_for_digit(argv[2]))
	{
		printf("Error\n1\n");
	}
	return (0);
}

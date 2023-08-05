#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
/**
 * checker - To check for digit
 * @str: Pointer to input
 *
 * main - Main Function
 * @argc: Counter
 * @argv: Pointer
 * Return: Summation of two ints
 */
int checker(char *str){
	int i;

	for (i = 0; str[i] != '\0'; i++){
		if (!isdigit((unsigned char) str[i]))
			return (0);
	}
	return (1);
}
int main(int argc, char *argv[]){
	int a, b, sum;

	if (argc == 1)
		printf("0\n");
	else if (argc == 2 || (!checker(argv[1]) || !checker(argv[2])))
		printf("Error\n1\n");
	else if (argc > 2 && checker(argv[1]) && checker(argv[2])){
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		sum = a + b;
		printf("%d\n",sum);
	}
	return (0);
}

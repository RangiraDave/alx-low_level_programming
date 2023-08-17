#include <stdlib.h>
#include <stdio.h>
/**
 * op_add - Addition
 * @a: a
 * @b: b
 * Return: Addition
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Addition
 * @a: a
 * @b: b
 * Return: Addition
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Addition
 * @a: a
 * @b: b
 * Return: Addition
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Addition
 * @a: a
 * @b: b
 * Return: Addition
 */
int op_div (int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - Addition
 * @a: a
 * @b: b
 * Return: Addition
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

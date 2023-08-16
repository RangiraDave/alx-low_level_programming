#include "3-calc.h"
#include <stdlib.h>
#include <string.h>
/**
 * get_op_func - Pointer to function
 * @s: Pointer to the Operator
 * Return: Pointer to the function related
 */
int (*get_op_func(char *s)) (int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;
	if (strcmp(s, ops[i].op) == 0)
	{
		get_op_func(s);
		i++;
	}
	return (NULL);
}

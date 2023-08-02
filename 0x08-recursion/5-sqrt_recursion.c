#include "main.h"
/**
 * _pow_recursion - give the power
 * @n: input
 * Return: The natural number of input & if not, -1.
 */

int sqroot(int i, int j){
	if (i * i == j){
		return (i);
	}
	else{
		return (-1);
	}
	return sqroot(i + 1, j);
}

int _sqrt_recursion(int n){
	return (sqroot(1, n));
}

#include <stdio.h>
/**
 * _first - Function thats brinted before main funtion
 * constructor - called The start-up module
 * Return: Nothing.
 */
void __attribute__ ((constructor)) _first()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

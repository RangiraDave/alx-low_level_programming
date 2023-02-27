#include "main.h"
/**
 * _puts - prints string
 * @str: pointer
 * Return: Returns i
 */
void _puts(char *str)
{
	if (*str > 'a' || *str < 'Z')
		return (*str);
	else
		return (0);
}

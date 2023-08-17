#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - Prints Numbers pased in
 * @separator: Pointer to string separeting two numbers
 * @n: number of ints passed
 * @...: Ellipsis
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list Num;

	va_start(Num, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(Num, int));
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(Num);
}

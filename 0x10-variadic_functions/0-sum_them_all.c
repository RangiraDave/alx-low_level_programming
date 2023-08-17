#include <stdarg.h>
/**
 * sum_them_all - Variadic function
 * @n: Number  of argments
 * @...: Ellipsis
 * Return: Sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}

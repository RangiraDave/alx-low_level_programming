#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - VF to print strings
 * @separator: Pointer to Separator
 * @n: Number of args passed
 * @...: Ellipsis for infinit args
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *T;
	va_list Str;

	va_start(Str, n);
	for (i = 0; i < n; i++)
	{
		T = va_arg(Str, char *);
		if (T == NULL)
			printf("nil");
		else
			printf("%s", T);
		if (i < n - 1 && T != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(Str);
}

/**
 * print_name - Function that prints a Name
 * @name: Pointer to name
 * @f: Pointer to function
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}

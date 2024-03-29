#include <stdio.h>
#include "lists.h"
/**
 * print_list - Function to print a list
 * @h: Pointer to hesd of a list
 * Return: Number of nodes
 *
 */
size_t print_list(const list_t *h)
{
	int i = 0;
	const list_t *current = h;

	if (!current)
		return (0);
	while (current != NULL)
	{
		if (current->str == NULL)
			printf("[0] (null)\n");
		else
			printf("[%d] %s\n", current->len, current->str);
		current = current->next;
		i++;
	}
	return (i);
}

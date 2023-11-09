#include "lists.h"

/**
 * print_dlistint - Function to print elements of a list.
 * @h: Pointer to the head of linked list.
 * Return: Number of nodes.
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *ptr = h;
	size_t n = 0;

	if (!h)
		return (0);

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		n++;
	}
	return (n);
}

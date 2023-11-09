#include "lists.h"

/**
 * dlistint_len - Function to return number of nodes in a list.
 * @h: Pointer to head of the list.
 * Return: Number of elements in list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;

	if (!h || h == NULL)
		return (0);

	while (h != NULL)
	{
		h = h->next;
		n++;
	}

	return (n);
}

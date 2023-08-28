#include "lists.h"
/**
 * listint_len - Function that returns number of nodes in a list
 * @h: Pointer to the head of the list
 * Return: Number of nodes
 */
size_t listint_len(const listint_t *h)
{
	/*listint_t *temp = h;*/
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}

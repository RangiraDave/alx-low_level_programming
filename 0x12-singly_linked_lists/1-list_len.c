#include <stdio.h>
#include "lists.h"
/**
 * list_len - Function To print number of nodes in a list
 * @h: Pointer to the head of a list
 * Return: Number of Elements in the list
 */
size_t list_len(const list_t *h)
{
	int i = 0;
	const list_t *Temp = h;

	while (Temp != NULL)
	{
		Temp = Temp->next;
		i++;
	}
	return (i);
}

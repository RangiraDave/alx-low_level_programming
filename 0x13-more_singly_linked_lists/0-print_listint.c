#include <stdio.h>
#include "lists.h"
/**
 * print_listint - Function that prints elements in a list
 * @h: Pointer to the start of list
 * Return: Number of elements in a list
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *temp = h;
	int i;

	i = 0;

	if (temp->next == NULL)
	{
		printf("%d\n", temp->num);
		return (1);
	}
	while (temp != NULL)
	{
		printf("%d\n", temp->num);
		temp = temp->next;
		i++;
	}
	return (i);
}

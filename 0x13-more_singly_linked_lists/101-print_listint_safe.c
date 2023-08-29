#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - Safely printing a list.
 * @head: Pointer to first node.
 * Return: Number of nodes printed.
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *gahoro = head, *cyane = head;
	size_t i = 0;

	if (!head)
		exit(98);

	while (gahoro && cyane && cyane->next)
	{
		printf("%d\n", gahoro->n);
		gahoro = gahoro->next;
		cyane = cyane->next->next;
		i++;

		if (gahoro == cyane)
		{
			printf("-> [%p] %d\n", (void *)gahoro, gahoro->n);
			return (i);
		}
	}
	while (gahoro)
	{
		printf("%d\n", gahoro->n);
		gahoro = gahoro->next;
		i++;
	}
	return (i);
}

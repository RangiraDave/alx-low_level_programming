#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *gahoro = head, *cyane = head;
	size_t i = 0;

	if (!head)
		return (0);

	while (gahoro && cyane && cyane->next)
	{
		printf("%d\n", gahoro->n);
		gahoro = gahoro->next;
		cyane = cyane->next->next;
		i++;

		if (gahoro == cyane)
			return (i);
		/*else
			exit(98);*/
	}
	while (gahoro)
	{
		printf("%d\n", gahoro->n);
		gahoro = gahoro->next;
		i++;
	}
	return (i);
}

#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Funtion to delete a node from give index.
 * @head: Pointer to head node.
 * @index: Given index in list.
 * Return: 1 or -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *pre, *current;
	unsigned int i;

	pre = NULL;
	current = *head;
	i = 0;

	if (!current)
		return (-1);
	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}
	while (current)
	{
		if (i + 1 == index)
		{
			pre->next = current->next;
			free(current);
			return (1);
		}
		pre = current;
		current = current->next;
		i++;
	}
	return (-1);
}

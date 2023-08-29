#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - Function to ad a ni=ode at given index
 * @head: Pointer to list's head.
 * @idx: Given index.
 * @n: Data for the new node.
 * Return: Address of inserted node;
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = *head, *new_node = malloc(sizeof(listint_t));
	unsigned int i;

	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	i = 1;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (*head);
	}
	while (*head != NULL)
	{
		if (i == idx)
		{
			new_node->next = temp->next;
			temp->next = new_node;
			return (new_node);
		}
		i++;
		temp = temp->next;
	}
	free(new_node);
	return (NULL);
}

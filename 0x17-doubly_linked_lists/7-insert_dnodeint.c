#include "lists.h"

/**
 * insert_dnodeint_at_index - Function to insert a node at index.
 * @h: Pointer to head of the list.
 * @idx: Index of new node.
 * @n: Number to be inserted.
 * Return: Address of new node or NULL on failler.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h, *new_node = malloc(sizeof(dlistint_t));
	unsigned int i = 1;

	if (!new_node)
		return (NULL);

	if (!h && idx != 0)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	while (temp != NULL)
	{
		if (idx == i)
		{
			new_node->next = temp->next;
			temp->next = new_node;
			new_node->prev = temp;
			temp = new_node;

			return (temp);
		}
		temp = temp->next;
		i++;
	}

	return (NULL);
}

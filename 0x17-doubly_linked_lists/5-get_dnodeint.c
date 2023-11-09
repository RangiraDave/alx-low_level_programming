#include "lists.h"

/**
 * get_dnodeint_at_index - Function that returns node at given idx.
 * @head: Pointer to head of the list.
 * @index: Index to be retrieved.
 * Return: The node or NULL if it does not exist.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head->next != NULL)
	{
		if (i == index)
		{
			return (head);
			break;
		}
		head = head->next;
		i++;
	}
	return (NULL);
}

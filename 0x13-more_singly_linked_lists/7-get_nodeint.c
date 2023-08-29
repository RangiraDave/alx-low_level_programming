#include "lists.h"

/**
 * get_nodeint_at_index - function to find the node at a certain index
 * @head: Pointer to head node.
 * @index: Index of intended node.
 * Return: Node at index.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i;

	if (!head)
		return (0);

	i = 0;
	while (head->next != NULL)
	{
		temp = head;
		if (i == index)
			return (temp);
		head = head->next;
		i++;
	}
	return (NULL);
}

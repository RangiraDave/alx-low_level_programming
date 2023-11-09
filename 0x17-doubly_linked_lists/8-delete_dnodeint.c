#include "lists.h"

/**
 * delete_dnodeint_at_index - Function to delete a node at index.
 * @head: Pointer to head of the list.
 * @index: Index to which node to be deleted is.
 * Return: 1 on success and -1 on failer.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int i = 0;

	if (!head || *head == NULL)
		return (-1);

	while (temp)
	{
		if (i == index)
		{
			if (temp->prev == NULL)
			{
				*head = temp->next;
				if (temp->next)
					temp->next->prev = NULL;
				free(temp);
				return (1);
			}

			if (temp->next == NULL)
			{
				temp->prev->next = NULL;
				free(temp);
				return (1);
			}

			temp->prev->next = temp->next;
			temp->next->prev = temp->prev;
			free(temp);

			return (1);
		}
		temp = temp->next;
		i++;
	}
	return (-1);
}

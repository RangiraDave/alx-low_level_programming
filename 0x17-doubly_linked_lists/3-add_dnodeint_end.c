#include "lists.h"

/**
 * add_dnodeint_end - Function that adds node at end of
 * doubly linked list.
 * @head: Pointer to head of the list.
 * Return: Pointer to the newly added node.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *new_node = malloc(sizeof(dlistint_t));

	if (!new_node || !head)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (!head || *head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	if ((*head)->next == NULL)
	{
		(*head)->next = new_node;
		new_node->prev = *head;
		return (new_node);
	}

	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new_node;
	new_node->prev = temp;

	return (new_node);
}

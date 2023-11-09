#include "lists.h"

/**
 * add_dnodeint - Function to add new node at begining of
 * doubly linked list.
 * @head: Pointer to head of the list.
 * @n: Number to be added.
 * Return: Address of new node.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (!new_node || !head)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	new_node->next = *head;
	*head = new_node;

	return (new_node);
}

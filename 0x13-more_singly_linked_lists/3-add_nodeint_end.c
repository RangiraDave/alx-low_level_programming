#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - Function To add new node at the end
 * @head: Pointer to current head of the list
 * @n: Data of node tobe aded
 * Return: The address to new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = *head, *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new_node;

	return (new_node);
}

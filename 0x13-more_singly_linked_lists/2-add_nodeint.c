#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - Function that adds element on the start of a list
 * @head: Pointer to the start of the list
 * @n: Element to be added
 * Return: The address of new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}

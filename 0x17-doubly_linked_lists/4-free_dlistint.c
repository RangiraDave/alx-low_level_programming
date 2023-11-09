#include "lists.h"

/**
 * free_dlistint - Function to free doubly linked list.
 * @head: Pointer to head of the list.
 * Return: Nothing.
 */

void free_dlistint(dlistint_t *head)
{
	if (!head)
		return;
	while (head != NULL)
	{
		free(head);
		head = head->next;
	}
	free(head);
}

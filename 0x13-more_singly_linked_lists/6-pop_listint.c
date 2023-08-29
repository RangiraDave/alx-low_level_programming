#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - Function that deletes head node
 * @head: Pointer to current head node.
 * Return: Data of head node
 */

int pop_listint(listint_t **head)
{
	listint_t *temp = *head;

	*head = (*head)->next;

	free(temp);
	return (temp->n);
}

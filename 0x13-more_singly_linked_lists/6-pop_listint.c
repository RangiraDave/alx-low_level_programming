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
	int num;

	if (*head == NULL)
		return (0);
	num = temp->n;
	*head = (*head)->next;
	free(temp);

	return (num);
}

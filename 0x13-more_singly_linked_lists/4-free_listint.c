#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - Function to free list's allocated memory for nodes
 * @head: Pointer to the head of list
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}

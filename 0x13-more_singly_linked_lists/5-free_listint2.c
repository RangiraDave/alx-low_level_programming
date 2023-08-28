#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint2 - Function that frees list and sets NULL to head
 * @head: Pointer to current start of the list
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (*head == NULL)
	{
		printf("(nil)");
		return;
	}
	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	*head = NULL;
}

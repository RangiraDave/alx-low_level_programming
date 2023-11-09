#include "lists.h"

/**
 * sum_dlistint - Function to sum list data.
 * @head: Pointer to the head of the list.
 * Return: Sum of n and 0 for empty list.
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);
/*	if (head->next == NULL)
		return (head);*/
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

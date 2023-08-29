#include "lists.h"

/**
 * sum_listint - Function to culculate the sum of all nodes in a list.
 * @head: Pointer to head node.
 * Return: Sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);
	if (head->next == NULL)
		sum = head->n;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}

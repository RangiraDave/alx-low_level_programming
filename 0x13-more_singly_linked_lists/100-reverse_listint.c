#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - Function that reverses list's node pointers
 * @head: Pointer to first node in the list.
 * Return: Address of new head.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *next_node = NULL, *pre = NULL;

	if (!head || !(*head))
		return (NULL);
	while (*head)
	{
		next_node = (*head)->next;
		(*head)->next = pre;
		pre = *head;
		*head = next_node;
	}
	*head = pre;
	return (NULL);
}

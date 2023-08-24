#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_node_end - Function to help add a node at the endo of a list
 * @head: Start of teh list.
 * @str: String in the node.
 * Return: The address of new added node.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	list_t *Temp;

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	Temp = *head;

	while (Temp->next != NULL)
		Temp = Temp->next;
	Temp->next = new_node;

	return (new_node);
}

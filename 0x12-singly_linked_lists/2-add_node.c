#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - FUnction That Adds a node on head of list
 * @head: Pointer to the address of head of the list
 * @str: Pointer to list's str dsts
 * Return: Address of added node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *Temp = malloc(sizeof(list_t));

	if (Temp == NULL)
		return (NULL);

	Temp->str = strdup(str);

	if (Temp->str == NULL)
	{
		free(Temp);
		return (NULL);
	}

	Temp->len = strlen(str);
	Temp->next = *head;
	*head = Temp;

	return (Temp);
}

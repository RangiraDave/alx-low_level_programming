#include <stdlib.h>
#include "lists.h"
/**
 * free_list - Function to free the memory dynamically allocated in list
 * @head: Pointer to the start of list;
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *Temp;

	while (head != NULL)
	{
		Temp = head;
		head = head->next;
		if (Temp->next)
			free(Temp->str);
		/*free(Temp->len);*/
		free(Temp);
	}
}

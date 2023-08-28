#ifndef LISTS_H
#define LISTS_H
#include <stddef.h>
/**
 * struct listint_s - Structure to creat a list
 * @n: integer in a node
 * @next: Pointer to the next node
 *
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
#endif

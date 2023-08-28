#ifndef LISTS_H
#define LISTS_H
#include <stddef.h>
/**
 * struct listint_s - Structure to creat a list
 * @num: integer in a node
 * @len: Length of a node
 * @next: Pointer to the next node
 *
 */
typedef struct listint_s
{
	int num;
	int len;
	struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);
#endif

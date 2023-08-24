#ifndef LISTS_H
#define LISTS_H
#include <stddef.h>
/**
 * struct list_s - Structure to creat a list
 * @str: String in a node
 * @len: Length of a node
 * @next: Pointer to the next node
 *
 */
typedef struct list_s
{
	char *str;
	int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
#endif

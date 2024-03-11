#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

int main(void)
{
    list_t *head = NULL;
    size_t node_count;

    /* Test: Empty list */
    printf("Test with an empty list:\n");
    node_count = print_list(head);
    printf("-> Printed %lu nodes.\n\n", (unsigned long)node_count);

    /* Test: List with one node and str is NULL */
    head = malloc(sizeof(list_t));
    head->str = NULL;
    head->len = 0;
    head->next = NULL;
    printf("Test with one node and str is NULL:\n");
    node_count = print_list(head);
    printf("-> Printed %lu nodes.\n\n", (unsigned long)node_count);
    free(head);

    /* Test: List with one node and str is not NULL */
    head = malloc(sizeof(list_t));
    head->str = strdup("Hello");
    head->len = 5;
    head->next = NULL;
    printf("Test with one node and str is not NULL:\n");
    node_count = print_list(head);
    printf("-> Printed %lu nodes.\n\n", (unsigned long)node_count);
    free(head->str);
    free(head);

    /* Test: List with multiple nodes */
    head = malloc(sizeof(list_t));
    head->str = strdup("Hello");
    head->len = 5;
    head->next = malloc(sizeof(list_t));
    head->next->str = NULL;
    head->next->len = 0;
    head->next->next = malloc(sizeof(list_t));
    head->next->next->str = strdup("World");
    head->next->next->len = 5;
    head->next->next->next = NULL;
    printf("Test with multiple nodes:\n");
    node_count = print_list(head);
    printf("-> Printed %lu nodes.\n\n", (unsigned long)node_count);
    
    /* Free allocated memory */
    free(head->str);
    free(head->next->next->str);
    free(head->next->next);
    free(head->next);
    free(head);

    return (0);
}


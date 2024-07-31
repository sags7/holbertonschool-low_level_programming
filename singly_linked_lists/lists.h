#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>
/**
 * struct list_single - singly-linked list
 * @str: a string pointer
 * @len: the length of str
 * @next: a pointer to the next node on the list
 *
 * Description: singly-linked list of strings and their lengths
 */
typedef struct list_t
{
	char *str;
	int len;
	struct list_t *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);

#endif

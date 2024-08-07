#include <stdlib.h>
#include "lists.h"
/**
 * free_list - frees the malloced space for a list_t
 * @head: a pointer to the list
 */
void free_list(list_t *head)
{
	list_t *next;

	while (head)
	{
		next = head->next;
		free(head->str);
		free(head);
		head = next;
	}
}

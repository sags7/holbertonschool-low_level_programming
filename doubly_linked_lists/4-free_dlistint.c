#include <stdlib.h>
#include "lists.h"
/**
 * free_dlistint - frees all allocations made for a dlistint_t
 * @head: a pointer to the head of the delistint_t
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next;

	while (head)
	{
		next = head->next;
		free(head);
		head = next;
	}
}

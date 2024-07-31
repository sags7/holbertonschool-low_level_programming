#include <stdlib.h>
#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t
 * @head: a pointer to the head of the lists
 * @index: the index of the node on the lists
 * Return: the nth node of the list or NULL if it doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (head && index-- != 0)
		head = head->next;
	return (head);
}

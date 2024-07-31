#include <stdlib.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a node at a given index on a list
 * @h: a pointer to the head pointer
 * @idx: the index to insert the new node at
 * @n: the data for the new node
 * Return: the address to the new node or NULL if fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode;
	dlistint_t *current = *h;

	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);
	newNode->prev = NULL;
	newNode->next = NULL;
	newNode->n = n;

	if (idx == 0)
	{
		newNode->next = *h;
		if (*h)
			(*h)->prev = newNode;
		*h = newNode;
		return (newNode);
	}

	while (current != NULL && idx-- > 1)
		current = current->next;

	if (idx > 0 || current == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->next = current->next;
	newNode->prev = current;
	if (current->next)
		current->next->prev = newNode;
	current->next = newNode;

	return (newNode);
}

#include <stdlib.h>
#include "lists.h"
/**
 * add_dnodeint_end - adds a new node to the end of a dlistint_t
 * @head: a pointer to the pointer to the head of the list
 * @n: the data for the new node
 * Return: a pointer to the new element or NULL if malloc fails
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *index = *head;
	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	if (!newNode)
		return (NULL);

	if (!*head)
	{
		newNode->prev = NULL;
		newNode->next = NULL;
		newNode->n = n;
		*head = newNode;
	}
	else
	{
		while (index->next)
			index = index->next;
		index->next = newNode;
		newNode->prev = index;
		newNode->n = n;
	}

	return (newNode);
}

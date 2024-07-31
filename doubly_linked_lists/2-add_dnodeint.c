#include <unistd.h>
#include "lists.h"
/**
 * add_dnodeint - adds a new node at the start of a dlistint_t
 * @head: the head of the list
 * @n: the data for the new node
 * Return: the address of the new element or NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	if (!newNode)
		return (NULL);

	newNode->n = n;
	if (*head)
	{
		newNode->next = *head;
		newNode->prev = NULL;
		(*head)->prev = newNode;
	}
	*head = newNode;

	return (*head);
}

#include <unistd.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a node to a list_t and returns the list's head
 * @head: a pointer to the head pointer
 * @str: the data to be placed in the new node
 * Return: a pointer to the node or null if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode = malloc(sizeof(list_t));

	if (!newNode)
		return (NULL);

	newNode->str = strdup(str);
	if (!newNode->str)
	{
		free(newNode);
		return (NULL);
	}

	newNode->len = strlen(str);
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}

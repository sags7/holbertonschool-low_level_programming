#include <unistd.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a node to a list_t and returns the list's head
 * @head: a pointer to the head pointer
 * @str: the data to be placed in the new node
 * Return: a pointer to the node or null if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *index = *head;
	list_t *newNode = malloc(sizeof(list_t));
	int len = 0;

	if (!newNode)
		return (NULL);

	newNode->str = strdup(str);
	if (!newNode->str)
	{
		free(newNode);
		return (NULL);
	}

	while (str[len++])
		;

	newNode->len = len - 1;

	if (!index)
	{
		*head = newNode;
		index = *head;
	}
	while (index->next)
		index = index->next;

	index->next = newNode;
	newNode->next = NULL;

	return (newNode);
}

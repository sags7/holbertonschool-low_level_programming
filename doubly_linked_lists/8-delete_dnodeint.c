#include <stdlib.h>
#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes a node at the nth position in a
 * dlistint_t
 * @head: the pointer to the pointer that hold the head of the list
 * @index: the index of the node to delete
 * Return: 1 if succeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *to_delete;
	dlistint_t *tmp = *head;

	if (!(*head))
		return (-1);

	if (*head)
	{
		if (index == 0)
		{
			if (tmp->next)
				(tmp->next)->prev = NULL;
			(*head) = tmp->next;
			free(tmp);
			return (1);
		}

		while (tmp && index-- > 1)
			tmp = tmp->next;

		if (tmp && tmp->next)
		{
			to_delete = tmp->next;
			tmp->next = to_delete->next;
			if (to_delete->next)
				to_delete->next->prev = tmp;
			free(to_delete);
			return (1);
		}
	}

	return (-1);
}

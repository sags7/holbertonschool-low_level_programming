#include <stdio.h>
#include "lists.h"
/**
 * list_len - returns the size_t of a list_t
 * @h: a pointer to the head of the list
 * Return: the size_t of the list
 */
size_t list_len(const list_t *h)
{
	size_t retVal = 0;
	const list_t *index = h;

	index = h;
	while (index)
	{
		index = index->next;
		retVal++;
	}

	return (retVal);
}

#include <unistd.h>
#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a dlistint_t
 * @h: the head of the list
 * Return: the size_t of the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	if (h)
		while (h)
		{
			len++;
			h = h->next;
		}
	return (len);
}

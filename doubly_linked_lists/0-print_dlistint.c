#include <unistd.h>
#include <stdio.h>
#include "lists.h"
/**
 *  print_dlistint - prints all the elements of a dlistint_t
 *  @h: the head of the list
 *  Return: the size_t of the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *index = h;
	size_t len = 0;

	if(index)
	{
		do {
			len++;
			printf("%d\n", index->n);
			index = index->next;
		} while (index != NULL);
	}
	return (len);
}

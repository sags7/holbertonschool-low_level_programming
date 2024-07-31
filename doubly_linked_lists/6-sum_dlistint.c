#include <stdlib.h>
#include "lists.h"
/**
 * sum_dlistint - returns the sum of all data in a dlistint_t
 * @head: the head of the lists
 * Return: an in with the sum of all data on the list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

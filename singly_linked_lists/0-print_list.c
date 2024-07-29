#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list
 * @h: a pointer to the head of the list
 * Return: the number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	size_t retVal = 0;
	const list_t *index = h;

		index = h;
		while (index)
		{
			printf("[%d] ", index->len);

			if (index->str)
				printf("%s", index->str);
			else
				printf("(nil)");

			printf("\n");
			index = index->next;
			retVal++;
		}

	return (retVal);
}

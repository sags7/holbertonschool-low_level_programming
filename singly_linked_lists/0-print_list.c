#include <stdlib.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list
 * @h: a pointer to the head of the list
 * Return: the number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	int i = 0;
	int retVal = 0;
	const list_t *index = h;

		index = h;
		while (index)
		{
			_putchar('[');
			_putchar(index->len + '0');
			_putchar(']');
			_putchar(' ');

			i = 0;
			if (index->str)
				while (index->str[i])
					_putchar(index->str[i++]);
				else
				{
					_putchar('(');
					_putchar('n');
					_putchar('i');
					_putchar('l');
					_putchar(')');
				}
			_putchar('\n');
			index = index->next;
			retVal++;
		}

	return (retVal);
}

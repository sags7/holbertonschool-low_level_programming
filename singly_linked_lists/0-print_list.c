#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list
 * @h: a pointer to the head of the list
 * Return: the number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	/**int i = 0;*/
	int retVal = 0;
	const list_t *index = h;

		index = h;
		while (index)
		{
			/**
			*i = 0;
			*
			*_putchar('[');
			*_putchar(index->len + '0');
			*_putchar(']');
			*_putchar(' ');
			*/
			printf ("[%d] ", index->len);

			if (index->str)
				printf("%s", index->str);
				/**
				 * while (index->str[i])
				 *	_putchar(index->str[i++]);
				 */
			else
			{
				printf("(nil)");
				/**
				*_putchar('(');
				*_putchar('n');
				*_putchar('i');
				*_putchar('l');
				*_putchar(')');
				*/
			}
			printf("\n");
			/**_putchar('\n');*/
			index = index->next;
			retVal++;
		}

	return (retVal);
}

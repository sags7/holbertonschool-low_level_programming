#include <stdlib.h>
/**
 * create_array- creates and array of chars and initilizes it with
 * a spefici char
 * @size: the size of the array
 * @c: the char to initialize the array with
 * Return: a pointer to the first element of the array, Null if size = 0
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *arr = malloc(size * sizeof(c));

	if (size <= 0)
		return (NULL);
	for (i = 0; i < size; i++)
		*(arr + i) = c;
	return (arr);
}

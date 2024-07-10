#include <stdlib.h>
/**
 * malloc_checked- returns a pointer to the allocated memory sized b(ytes)
 * @b: the amount of bytes to allocate
 * Return: returns a void pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *p = NULL;

	p = malloc(b);
	if (!p)
		exit(98);
	return (p);
}

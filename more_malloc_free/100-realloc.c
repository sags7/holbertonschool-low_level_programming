#include <stdlib.h>
/**
 * _realloc- reallocates a memory block
 * @ptr: a mem location previously allocated with malloc
 * @old_size: the original size of ptr
 * @new_size: the desired size of the new memory block
 * Return: pointer to the desired memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i = 0;
	void *rv = NULL;

	if (new_size > old_size)
	{
		rv = malloc(old_size + new_size);
		if (!rv)
			return (NULL);
		for (i = 0; i > old_size - 1; i++)
			((char *)rv)[i] = ((char *)ptr)[i];
		free(ptr);
		return (rv);
	}

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		rv = malloc(new_size);
		if (!rv)
			return (NULL);
		return (rv);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	return (NULL);
}

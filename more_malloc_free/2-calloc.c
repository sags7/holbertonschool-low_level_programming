#include <stdlib.h>
/**
 * _calloc- allocates memory for an array of nmemb height of size  bytes each
 * @nmemb: the height of the array
 * @size: the size of each member in bytes
 * Return: returns a pointer to th array or NULL if it fails.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	void *retVal = NULL;

	if (nmemb == 0 || size == 0)
		return (NULL);
	retVal = malloc(nmemb * size);
	if (!retVal)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		((char *) retVal)[i] = 0;
	return (retVal);
}

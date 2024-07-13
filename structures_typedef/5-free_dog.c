#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - frees the memory allocated by new_dog
 * @d: the stuct dog to be freed
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

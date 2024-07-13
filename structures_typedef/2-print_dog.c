#include <stdio.h>
#include "dog.h"
/**
 * print_dog - prints the contents of a struct dog t stdout
 * @d: a pointer to the dog struct
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		char *name = d->name ? d->name : "(nil)";
		float age = d->age ? d->age : 0;
		char *owner = d->owner ? d->owner : "(nil)";

		printf("Name: %s\nAge: %f\nOwner: %s\n", name, age, owner);
	}
}

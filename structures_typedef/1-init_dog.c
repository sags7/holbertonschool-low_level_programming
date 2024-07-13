#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d:  pointer to the struct
 * @name: the dogs name
 * @age: the age of the dogs
 * @owner: the dogs owners name
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}

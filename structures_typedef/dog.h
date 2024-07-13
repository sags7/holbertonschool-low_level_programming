#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog struct data type
 * @name: the dogs name
 * @age: the dogs name
 * @owner: the dogs owners name
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif

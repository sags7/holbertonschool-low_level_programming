#include <stdlib.h>
#include "dog.h"
/**
 * _strcpy- copies the string pointed to by src including the \0
 *  to the buffer pointed at by dest
 * @dest: the destination pointer
 * @src: the source pointer
 * Return: returns the the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
/**
 * _strlen_recursion- returns the length of a string
 * @s: the string to measure
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	if (!s || !*s)
		return (0);
	return (_strlen_recursion(s + 1) + 1);
}
/**
 * new_dog - creates a new dog_t struct
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: a pointer to the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *retVal = NULL;

	if (!name || !age || !owner)
		return (NULL);

	retVal = malloc(sizeof(dog_t) + 1);

	if (!retVal)
		return (NULL);

	retVal->name =
		(char *) malloc(sizeof(char) * (_strlen_recursion(name) + 1));
	if (!retVal->name)
	{
		free(retVal);
		return (NULL);
	}

	retVal->owner =
		(char *) malloc(sizeof(char) * (_strlen_recursion(owner) + 1));
	if (!retVal->owner)
	{
		free(retVal->name);
		free(retVal);
	}

	retVal->name = _strcpy(retVal->name, name);
	retVal->age = age;
	retVal->owner = _strcpy(retVal->owner, owner);

	return (retVal);
}

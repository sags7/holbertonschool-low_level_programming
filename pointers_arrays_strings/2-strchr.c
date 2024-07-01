#include <stddef.h>
/**
 * _strchr- returns a pointer to the first occurrence of the character c
 * in the string s, or null if the character isnt found
 * @s: the string to search for c
 * @c: the char to look for in s
 * Return: a pointer to the first occurence of c
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; *(s + i) != '\0'; i++)
		if (*(s + i) == c)
			return (&*(s + i));
	return (NULL);
}

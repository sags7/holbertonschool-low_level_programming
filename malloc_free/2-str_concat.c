#include <stdlib.h>
/**
 * _strlen- returns the length of a string
 * @s: the string to measure
 * Return: the length of the string
 */
int _strlen(char *s)
{
	if (!s || !*s)
		return (0);
	return (_strlen(s + 1) + 1);
}
/**
 * str_concat- concatenates two strings and returns a pointer
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 * Return: pointer to the resulting string
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0;
	unsigned int a = _strlen(s1), b = _strlen(s2);
	char *retVal = malloc((a + b + 1) * sizeof(char));

	if (!retVal)
		return (NULL);
	if (s1)
		for (i = 0; *(s1 + i); i++)
			*(retVal + i) = *(s1 + i);
	if (s2)
		for (i = 0; *(s2 + i); i++)
			*(retVal + a + i) = *(s2 + i);
	*(retVal + a + b) = '\0';
	return (retVal);
}

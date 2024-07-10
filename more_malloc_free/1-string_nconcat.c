#include <stdlib.h>
#include "main.h"
/**
 * _strlen- returns the length of a string
 * @s: the string to measure
 * Return: the length of the string
 */
unsigned int _strlen(char *s)
{
	if (!s || !*s)
		return (0);
	return (_strlen(s + 1) + 1);
}
/**
 * string_nconcat- returns a pointer with string1  followed
 * by the first n bytes fo string2 and null terminated.
 * @s1: first string
 * @s2: the second string
 * @n: the amount of bytes from s2 to concat to s1
 * Return: returns a pointer to the concatenated strings
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int aLen = 0, bLen = 0, a = 0, b = 0;
	char *retVal = NULL;

	if (s1)
		aLen = _strlen(s1);
	if (s2)
		bLen = n >= _strlen(s2) ? _strlen(s2) : n;
	retVal = malloc(aLen + bLen + 1);
	if (!retVal)
		return (NULL);

	for (a = 0; s1[a]; a++)
		retVal[a] = s1[a];
	for (b = 0; b < bLen; b++)
		retVal[a + b] = s2[b];
	retVal[a + b] = '\0';
	return (retVal);
}

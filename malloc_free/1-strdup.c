#include <stdlib.h>
/**
 * _strlen- returns the length of a string
 * @s: the string to measure
 * Return: the length of the string
 */
int _strlen(char *s)
{
	if (!*s)
		return (0);
	return (_strlen(s + 1) + 1);
}
/**
 * _strdup- duplicates a string and returns its mem location
 * @str: the string to be duplicated
 * Return: the memory location of the new string, Null if insufficient memory
 */
char *_strdup(char *str)
{
	int i = 0;
	char *newStr =  NULL;

	if (str == NULL)
		return (NULL);

	newStr = malloc((_strlen(str) * sizeof(char)) + 1);

	if(newStr == NULL)
		return (NULL);

	while (*(str + i))
	{
		*(newStr + i) = *(str + i);
		i++;
	}
	return (newStr);
}

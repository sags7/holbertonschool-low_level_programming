#include <stdlib.h>
#include <string.h>
/**
 * _strdup- duplicates a string and returns its mem location
 * @str: the string to be duplicated
 * Return: the memory location of the new string, Null if insufficient memory
 */
char *_strdup(char *str)
{
	int i = 0;
	char *newStr = malloc((strlen(str) * sizeof(char)) + 1);

	if (str == NULL || newStr == NULL)
		return (NULL);

	while (*(str +i))
	{
		*(newStr + i) = *(str + i);
		i++;
	}
	return (newStr);
}

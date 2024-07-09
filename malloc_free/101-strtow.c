#include <stdlib.h>
/**
 * wc- helper function to make main function more legible
 * @str: the input string
 * Return: the wordcount on the input string
 */
int wc(char *str)
{
	int i = 0, wordCount = 0;

	while (str[i])
	{
		while (str[i] == ' ')
			i++;
		if (str[i] != ' ' && str[i] != '\0')
		{
			wordCount++;
			while (str[i] != ' ' && str[i] != '\0')
				i++;
		}
	}
	return (wordCount);
}
/**
 * checknull- helper function to check for null values
 * @str: the input string
 * Return: amount of words in the input string
 */
char **checknull(char *str)
{
	int wordCount = 0;
	char **retVal = NULL;

	if (str == NULL || *str == '\0')
		return (NULL);

	wordCount = wc(str);
	if (wordCount == 0)
		return (NULL);

	retVal = (char **)malloc((wordCount + 1) * sizeof(char *));
	if (!retVal)
		return (NULL);

	return (retVal);
}
/**
 * strtow- splits a string into an array of words
 * @str: the string to split
 * Return: a pointer to the array of words
 */
char **strtow(char *str)
{
	int i = 0, j = 0, k = 0;
	int start = 0, length = 0;
	char **retVal = NULL;

	retVal = checknull(str);
	if (retVal == NULL)
		return (NULL);

	while (str[i])
	{
		while (str[i] == ' ')
			i++;
		if (str[i] != ' ' && str[i] != '\0')
		{
			start = i;
			length = 0;
			while (str[i] != ' ' && str[i] != '\0')
			{
				length++;
				i++;
			}
			retVal[j] = (char *)malloc((length + 1) * sizeof(char));
			if (!retVal[j])
			{
				for (k = 0; k < j; k++)
					free(retVal[k]);
				free(retVal);
				return (NULL);
			}
			for (k = 0; k < length; k++)
				retVal[j][k] = str[start + k];
			retVal[j][length] = '\0';
			j++;
		}
	}
	retVal[j] = NULL;
	return (retVal);
}

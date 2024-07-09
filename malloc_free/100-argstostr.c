#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr- concatenates all argsv passed followed by a new line
 * @ac: argsc
 * @av: argsv
 * Return: pointer to new string
 */
char *argstostr(int ac, char **av)
{
	int len = 0, a = 0, b = 0, c = 0;
	char *retVal = NULL;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			len++;
		len++;
	}


	retVal = malloc((len + 1) * sizeof(char));

	if (!retVal)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			retVal[c++] = av[a][b];
		}
		retVal[c++] = '\n';
	}
	retVal[c] = '\0';
	return (retVal);
}

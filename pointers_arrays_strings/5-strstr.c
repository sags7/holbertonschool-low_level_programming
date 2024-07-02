/**
 * _strstr- finds the first occurence of a substring needle
 * in the string haystack
 * @haystack: the string to look inside of
 * @needle: the substring to look for in haystack
 * Return: a pointer to the start of needle
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;
	char *retVal;

	if (*needle == '\0')
		return (haystack);

	for (i = 0; *(haystack + i); i++)
	{
		if (*(haystack + i) == *needle)
		{
			retVal = haystack + i;
			for (j = 0; *(needle + j); j++)
			{
				if (*(haystack + i + j) != *(needle + j))
					break;
			}
			if (*(needle + j) == '\0')
				return (retVal);
		}
	}
	return (0);
}

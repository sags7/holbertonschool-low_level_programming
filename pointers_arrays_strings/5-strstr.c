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

	for (i = 0; *(haystack + i); i++)
	{
		if (*needle == *(haystack + i))
		{
			retVal = haystack + i;
			for (j = 0; *(needle + j); j++)
			{
				if (*(haystack + i) != *(needle + j))
					return ('\0');
				i++;
			}
			return (retVal);
		}
	}
	return ('\0');
}

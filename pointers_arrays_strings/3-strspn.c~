/**
 * _strspn- returns the number of bytes inthe initial segment of s
 * which consists only of bytes from accept
 * @s: the array to search for terms in accept
 * @accept: the array with the characters to look for in s
 * Return: the amount of chars found in the first segment of s
 */


unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, retVal = 0;
	int match = 0;

	for (i = 0; *(s + i) != '\0'; i++)
		{
			match = 0;
			for (j = 0; *(accept + j) != '\0'; j++)
				{
					if (*(s + i) == *(accept + j))
						{
							retVal++;
							match = 1;
							break;
						}
				}
			if (match == 0)
				return (retVal);
		}
	return (retVal);
}

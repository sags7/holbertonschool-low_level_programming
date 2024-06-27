#include <stdio.h>
/**
 *  _atoi- converts a string to an integer
 * @s: the address of the string to convert to an int
 * Return: returns the converted int
 */
int _atoi(char *s)
{
	unsigned int i = 0, isPositive = 1, retVal = 0;

	while (s[i] != '\0')
	{
		if (s[i] == 43)
			isPositive *= 1;
		else if (s[i] == 45)
			isPositive *= -1;
		else
		{
			while (s[i] >= 48 && s[i] <= 57 && s[i] != '\0')
			{
				retVal = (retVal * 10) + (s[i] - '0');
				i++;
				if (!(s[i] >= 48 && s[i] <= 57 && s[i] != '\0'))
				{
					if (isPositive == 1)
						return (retVal);
					return (-retVal);
				}
			}
		}
		i++;
	}
	if (isPositive == 1)
		return (retVal);
	return (-retVal);
}

/**
 * _strlen- returns the length of a string
 *
 * @s: the starting memory position of the string
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int retVal = 0;

	while (1)
	{
		if (*(s + retVal) == '\0')
			return (retVal);
		retVal++;
	}
}

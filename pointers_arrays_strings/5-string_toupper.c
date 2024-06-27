/**
 * string_toupper- changes all lowercase letters to uppercase on a string
 * @c: the string to convert all chars to uppercase
 * Return: returns the converted string
 */
char *string_toupper(char *c)
{
	int i = 0;;

	while (*(c + i))
	{
		if (*(c + i) <= 'z' && *(c + i) >= 'a')
			*(c + i) -= 32;
		i++;
	}
	return (c);
}

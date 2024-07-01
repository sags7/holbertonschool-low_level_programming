/**
 * _strpbrk- located the first occurence in the string s
 * of any byte in the string accept
 * @s: the string to search inside of
 * @accept: the string to look for
 * Return: returns a pointer to the byte in sthat mathces one byte in accept
 * or null if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s + i); i++)
		for (j = 0; *(accept + j); j++)
			if (*(s + i) == *(accept + j))
				return (s + i);
	return ('\0');
}

/**
 * _strcat- appends the src string to the dest string, overwritting its \0
 * @dest: the string that will get src appended to
 * @src: the string that'll get appended to dest
 * Return: the memory address of the resulting dest string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, x = 0;

	while (dest[i] != '\0')
		i++;
	while (src[x] != '\0')
	{
		*(dest + i) = src[x];
		i++;
		x++;
	}
	return (dest);
}

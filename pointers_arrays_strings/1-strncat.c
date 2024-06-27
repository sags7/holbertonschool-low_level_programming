/**
 * _strncat- appends the src string up to the nth byte
 *  to the dest string, overwritting its \0
 * @dest: the string that will get src appended to
 * @src: the string that'll get appended to dest
 * @n: the number of chars to get from src
 * Return: the memory address of the resulting dest string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, x = 0;

	while (*(dest + i))
		i++;
	while (*(src + x) && x < n)
	{
		*(dest + i) = *(src + x);
		i++;
		x++;
	}
	return (dest);
}

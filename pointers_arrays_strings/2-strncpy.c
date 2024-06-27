/**
 * _strncpy- copies the src string up to the nth byte
 *  to the dest string, overwritting its \0
 * @dest: the string that will get src appended to
 * @src: the string that'll get appended to dest
 * @n: the number of chars to get from src
 * Return: the memory address of the resulting dest string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x = 0;

	while  (x < n && *(src + x) != '\0')
	{
		*(dest + x) = *(src + x);
		x++;
	}
	return (dest);
}

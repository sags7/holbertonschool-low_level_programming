/**
 * _memcpy- copies n bytes from memory area src to area dest
 * @dest: the destination mem area
 * @src: the source mem area
 * @n: the amount of bytes to copy
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	for(i = 0 ; i < n; i++)
			dest[i] = src[i];
	return (dest);
}

/**
 * _memset- fills the first n bytes of the memory area pointed
 * to by s with the constant b
 * @s:the memory area
 * @b: the constant byte to fill s with
 * @n: the amount of bytes in s to fill with b
 * Return: returns s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;
	return (s);
}

/**
 * _strcpy- copies the string pointed to by src including the \0
 *  to the buffer pointed at by dest
 * @dest: the destination pointer
 * @src: the source pointer
 * Return: returns the the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

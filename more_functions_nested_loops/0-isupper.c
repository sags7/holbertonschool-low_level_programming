/**
 * _isupper- program entry point
 *
 * @c: the char to determine if is uppercase
 *
 * Return: retruns 1 if c is uppercase and 0 if c is not uppercase
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}

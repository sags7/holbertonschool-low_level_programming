/**
 * _isdigit- program entry point
 *
 * @c: the char to determine if its a digit or not
 *
 * Return: retruns 1 if c is a  digit  and 0 if it isn't
 */
int _isupper(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

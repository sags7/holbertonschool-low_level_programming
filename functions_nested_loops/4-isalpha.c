/**
 * _isalpha- determines if a char is part of the alphabet or not
 *
 * @c: the character or ASCII value of a character to be tested
 *
 *Return: 1 if c is part of the alphabet, 0 if not.
 */

int _isalpha(char c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}

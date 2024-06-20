/**
 * _islower- determines if an int represents a lowercase character in ASCII
 *
 *@c: the int value of an ASCII character
 *
 *Return: 1 if its lowercase 0 if its anything else
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

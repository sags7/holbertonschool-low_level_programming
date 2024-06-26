#include "main.h"
/**
 * rev_string- reverses the string stored in address *s
 * @s: The location of the first character of the string
 */
void rev_string(char *s)
{
	int i, len = _strlen(s);
	char buf;

	for (i = 0; i < len / 2; i++)
	{
		buf = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = buf;
	}
}

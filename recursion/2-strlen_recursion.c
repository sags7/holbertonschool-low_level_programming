#include "main.h"
/**
 * _strlen_recursion- returns the length of a string
 * @s: the string to measure
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);
	return (_strlen_recursion(s + 1) + 1);
}

#include "main.h"
/**
 * print_rev_recursive- prints a string in reverse, followed by a new line
 *@s: the starting memory position of the string to be printed in reverse
 *@start: the memory location of the first letter of the string
 */
void print_rev_recursive(char *s, char *start)
{
	if (*s != '\0')
		print_rev_recursive((s + 1), start);
	if (*s != '\0')
		_putchar(*s);

	if (s == start)
		_putchar('\n');
}
/**
 * print_rev- prints a string to stdout in reverse, followed by a new line
 *@s: the starting memory position of the string to be printed in reverse
 */
void print_rev(char *s)
{
	print_rev_recursive(s, s);
}

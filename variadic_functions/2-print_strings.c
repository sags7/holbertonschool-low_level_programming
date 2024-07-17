#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
/**
 * print_strings - prints strings separated by a passed string
 * @separator: the string that separates the strings
 * @n: the number of strings to put together
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;

	va_start(args, n);

	for (i = 0; i < n - 1; i++)
	{
		char *str = va_arg(args, char *);
		if (str == NULL)
			printf("(nil");
		else
			printf("%s%s", str, separator);
	}

	printf("%s\n", va_arg(args, char *));
}

#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints numbers separated by a passed string
 * @separator: the string to separate the numbers
 * @n: the amount of arguments to print
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(args, n);
	for (i = 0; i < n - 1; i++)
	{
		printf("%d", va_arg(args, int));
		if (separator)
			printf("%s", separator);
	}
	printf("%d\n", va_arg(args, int));
	va_end(args);
}

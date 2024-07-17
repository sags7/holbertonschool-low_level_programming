#include <stdarg.h>
/**
 * sum_them_all - returns the sum of all the parameteres passed
 * until it receuived a 0 as an argument
 * @n: the amount of arguments to sum
 * Return: the sum of all the passed parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int count = 0;
	unsigned int i = 0;

	va_start(args, n);
	for (i = 0; i < n; i++)
		count += va_arg(args, int);
	va_end(args);
	return (count);
}

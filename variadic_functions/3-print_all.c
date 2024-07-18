#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * printChar - helper func that prints a char to stdout
 * @args: the va_list to get the args from
 */
void printChar(va_list args)
{
	printf("%c", va_arg(args, int));
}
/**
 * printInt - helper func that prints an int to stdout
 * @args: the va_list to get the args from
 */
void printInt(va_list args)
{
	printf("%d", va_arg(args, int));
}
/**
 * printFloat - helper func that prints an int to stdout
 * @args: the va_list to get the args from
 */
void printFloat(va_list args)
{
	printf("%.2f", va_arg(args, double));
}
/**
 * printString - helper func that prints an int to stdout
 * @args: the va_list to get the args from
 */
void printString(va_list args)
{
	printf("%s", va_arg(args, char *));
}
/**
 * print_all - a function that prints anything passed to it
 * @format: a list of types of arguments to be passed: c - char
 * i - integer, f - float,  s - char *, any other char is ignored
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	argtype argumentTypes[] = {
			{'c', printChar},
			{'i', printInt},
			{'f', printFloat},
			{'s', printString},
			{'\0', NULL}
	};

	va_start(args, format);

	while (format && *(format + i))
	{
		j = 0;
		while (argumentTypes[j].arg)
		{
			if (argumentTypes[j].arg == *(format + i))
			{
				argumentTypes[j].printFunc(args);
				if (*(format + i + 1))
					printf(", ");
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}

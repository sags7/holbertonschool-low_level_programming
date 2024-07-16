
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - two operand simple calculator
 * @argsc: the amount of arguments passed
 * @argsv: the arguments vector
 * Return: always 0 if successful
 */
int main(int argsc, char **argsv)
{
	int (*op)(int, int) = NULL;
	int num1 = 0, num2 = 0;

	if (argsc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if ((*argsv[2] == '/' || *argsv[2] == '%') && atoi(argsv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}

	num1 = atoi(argsv[1]);
	num2 = atoi(argsv[3]);
	op = get_op_func(argsv[2]);

	if (!op)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", op(num1, num2));
	return (0);
}

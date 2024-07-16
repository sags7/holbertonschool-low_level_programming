#include <stdio.h>
#include <stddef.h>
#include "3-calc.h"
/**
 * get_op_func - selects the correct function to call on a and b
 * @s: the operator passed as the argument to the program
 * Return: returns a pointer to the function that performs the desired
 * operation on a and b
 */
int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"&", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].f)
	{
		if (*s == *ops[i].op)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}

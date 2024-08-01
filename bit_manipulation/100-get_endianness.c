#include "main.h"
/**
 * get_endianness - determines little or big endiannes
 * Return: 1 if big endian, 0 if little endian
 */
int get_endianness(void)
{
	int i = 1;
	char *c;

	c = (char *) &i;
	if (*c == 1)
		return (1);
	return (0);
}

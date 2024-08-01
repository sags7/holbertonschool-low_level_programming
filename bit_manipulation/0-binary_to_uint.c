/**
 * binary_to_uint - turns a string of 1s and 0s into a uint
 * @b: the string of ones and zeroes
 * Return: the coverted number or 0 if incorrect input
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int retVal = 0, mask = 1;

	while (*(b + i))
	{
		if (*(b + i) != '0' && *(b + i) != '1')
			return (0);
		i++;
	}
	for (; i >= 0; i--)
	{
		if (*(b + i - 1) == '1')
			retVal |= mask;
		mask <<= 1;
	}
	return (retVal);
}

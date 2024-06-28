#include <stdio.h>
/**
 * infinite_add- adds two numbers and returns a pointer to the result
 * @n1: first number to add
 * @n2: second number to add
 * @r: buffer used to store the result
 * @size_r: buffer size
 * Return: returns a pointer to the string
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int lenA = 0, lenB = 0, carry = 0;
	int p, a, b;

	while (*(n1 + lenA))
		lenA++;
	while (*(n2 + lenB))
		lenB++;

	p = lenA >= lenB ? lenA + 2 : lenB + 2;

	if (p > size_r)
		return (0);

	r[p] = '\0';

	for (; p > 0; p--)
	{
		a = (lenA > 0) ? (*(n1 + lenA - 1) - '0') : 0;
		b = (lenB > 0) ? (*(n2 + lenB - 1) - '0') : 0;

		r[p - 1] = ((a + b + carry) % 10) + '0';
		carry = (a + b + carry) / 10;

		lenA--;
		lenB--;
	}
	if (carry)
	{
		for (p = size_r - 2; p > 0; p--)
			r[p] = r[p - 1];
		r[0] = carry + '0';
		return (r);
	}
	else
	{
		for (p = 0; r[p] == '0'; p++)
			;
		return (r + p);
	}
}

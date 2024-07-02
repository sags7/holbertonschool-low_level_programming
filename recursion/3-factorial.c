/**
 * factorial- returns the factorial of n
 * @n: the number we want the factorial of
 * Return: the factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}

/**
 * _sqrt- helper function to _sqrt_recursion
 * @n: the number to find the sqrt of
 * @guess: the initial guess of the sqrt
 * Return:  the natural sqrt of n or -1 if inexistent
 */
int _sqrt(int n, int guess)
{
	if (guess == n)
		return (-1);
	if (guess * guess == n)
		return (guess);
	return (_sqrt(n, ++guess));
}
/**
 * _sqrt_recursion- returns the natural square root of n
 * or -1 if it doesnt have one
 * @n: the number to find the square root of
 * Return: the natural square root of n or -1 if inexistent
 */
int _sqrt_recursion(int n)
{
	int guess = 0;

	if (n == 1)
		return (1);
	else if (n < 1)
		return (-1);
	return (_sqrt(n, guess));
}

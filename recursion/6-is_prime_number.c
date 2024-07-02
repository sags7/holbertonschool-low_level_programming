/**
 * helper_prime- helper funciton for is_prime_number
 * @n: the number to determine if its prime
 * @div: a divisor to test agaisnt n
 * Return: 1 if n is prime, 0 if not
 */
int helper_prime(int n, int div)
{
	if (n == div)
		return (1);
	if (n % div == 0)
		return (0);
	return (helper_prime(n, ++div));
}
/**
 * is_prime_number- returns 1 if true, 0 if false
 * @n: the number to see if its prime
 * Return: 1 if prime, 0 if not.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (helper_prime(n, 2));
}

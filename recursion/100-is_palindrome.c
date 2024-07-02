/**
 * helper_palindrome- helper function for is_palindrome
 * @s: the string to check if its a palindrome
 * @start: the letter to check against end
 * @end: the the letter to check against start
 * Return: 1 if s is palindrome, 0 if not
 */
int helper_palindrome(char *s, int start, int end)
{
	if (start == end || end < start)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (helper_palindrome(s, ++start, --end));
}
/**
 * is_palindrome- returns 1 if the string s is a palindrome
 * @s: the string to check
 * Return: 1 if s is a palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	int e = 0;

	if (*s == '\0')
		return (1);
	while (*(s + e))
		e++;
	return (helper_palindrome(s, 0, --e));
}

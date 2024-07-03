/**
 * helper_compare- helper function of wildcmp
 * @s: string one
 * @s2: string two
 * @i: index one
 * @i2: index two
 * Return: 1 if true, 0 if not true
 */
int helper_compare(char *s, char *s2, int i, int i2)
{
	if (s[i] == '\0' && s2[i2] == '\0')
		return (1);
	if (s2[i2] == '*')
	{
		if (s2[i2 + 1] == '\0')
			return (1);
		if (s[i] == '\0')
			return (helper_compare(s, s2, i, i2 + 1));
		if (helper_compare(s, s2, i + 1, i2) || helper_compare(s, s2, i, i2 + 1))
			return (1);
	}
	if (s[i] == s2[i2])
		return (helper_compare(s, s2, i + 1, i2 + 1));
	return (0);
}
/**
 * wildcmp- compares if two strings are identical considering
 * a wildcard '*' character may be present
 * @s1: the first string
 * @s2: the second string potentially containing the wildcard *
 * Return: 1 if they're identical, 0 if not
 */
int wildcmp(char *s1, char *s2)
{
	return (helper_compare(s1, s2, 0, 0));
}

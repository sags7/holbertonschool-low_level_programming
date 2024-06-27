/**
 * _strcmp- returns an int with the size difference of s1 compared to s2
 * @s1: the string to compare to s2
 * @s2: the string to be compared with s1
 * Return: the size difference between the two strings
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;;

	while((*(s1 + i) == *(s2 +i)) && (*(s1 + i) != '\0' && *(s2 + i) != '\0'))
		i++;
	return (s1[i] - s2[i]);
}

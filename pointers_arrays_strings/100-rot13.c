/**
 * rot13- encodes a string using rot13
 * @c: the string to be encoded
 * Return: the encoded string
 */
char *rot13(char *c)
{
	int i, a, rot = 13;
	char alph[] = "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZ";

	for (i = 0; *(c + i); i++)
	{
			for (a = 0; *(alph + a); a++)
			{
				if (((*(c + i) >= 'a' && *(c + i) <= 'z')
					 || (*(c + i) >= 'A' && *(c + i) <= 'Z'))
					&&  (*(c + i) == *(alph + a)))
				{
					*(c + i) = *(alph + a + rot);
					break;
				}
			}
	}
	return (c);
}

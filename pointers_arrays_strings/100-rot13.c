/**
 * rot13- encodes a string using rot13
 * @c: the string to be encoded
 * Return: the encoded string
 */
char *rot13(char *c)
{
	int i, a, rot = 13;
	char alph[] = "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz";
	char ALPH[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZ";

	for (i = 0; *(c + i); i++)
	{
		if (*(c + i) >= 'a' && *(c + i) <= 'z')
		{
			for (a = 0; *(alph + a); a++)
				if (*(c + i) == *(alph + a))
				{
					*(c + i) = *(alph + a + rot);
					break;
				}
		}
		else if (*(c + i) >= 'A' && *(c + i) <= 'Z')
		{
			for (a = 0; *(ALPH + a); a++)
				if (*(c + i) == *(ALPH + a))
				{
					*(c + i) = *(ALPH + a + rot);
					break;
				}
		}
	}
	return (c);
}

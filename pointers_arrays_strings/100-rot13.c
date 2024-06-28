/**
 * rot13- encodes a string using rot13
 * @c: the string to be encoded
 * Return: the encoded string
 */
char *rot13(char *c)
{
	int i, a, rot = 13;
	char alph[] = {
		'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o',
		'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
		'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o',
		'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
		'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O',
		'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z',
		'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O',
		'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '\0'
	};

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

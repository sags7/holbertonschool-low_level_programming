/**
 * leet- encodes a string into 1337
 * Return: returns the encoded string
 */
char *leet(char *c)
{
	int i, b;
	char letters[] = "aAeEoOtTlL";
	char codes[] = "43071";

	for (i = 0; *(c + i); i++)
		for (b = 0; *(letters + b); b++)
			if (*(c + i) == *(letters + b))
				*(c + i) = codes[b / 2];
	return (c);
}

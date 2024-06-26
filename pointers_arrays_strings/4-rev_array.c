/**
 * reverse_array- reverses the contents of an int array
 * @a: the first mem location of an int array
 * @n: the length of the array
 */
void reverse_array(int *a, int n)
{
	int i, buf;

	for (i = 0; i < n / 2; i++)
	{
		buf = *(a + i);
		*(a + i) = *(a + n - 1 - i);
	    *(a + n - 1 - i) = buf;
	}
}

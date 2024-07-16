/**
 * int_index - searches an array for a specific int
 * @array: the array to search in
 * @size: size of the array
 * @cmp: function used to compare values
 * Return: the first element for which the cmp function doesnt return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0 || !array || !cmp)
		return (-1);

	for (i = 0; i < size; i++)
		if (cmp(array[i]))
			return (i);
	return (-1);
}

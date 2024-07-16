#include <stddef.h>
/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array
 * @array: the array
 * @size: number of elements of the array
 * @action: the callback to execute on each element of the arr.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	for (i = 0; i < size; i++)
		action(array[i]);
}

#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array of integers
 * @array: The array of integers
 * @size: The size of the array
 * @cmp: A pointer to the function to be used to compare values
 * Return: if no element matche or size inferior or equal -1
 * otherwise - the index of the first element for which
 * the cmp function does return nothing
 *
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	i = 0;
	if (array == NULL || action == NULL)
		return;
	while (size >= 0)
	{
		if (cmp(array[size]))
			return (size);
		size--;
	}
	return (-1);
}

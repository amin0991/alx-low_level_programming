#include "function_pointers.h"

/**
* array_iterator - execute a function on each element of an array
* @array: given array
* @size: size of array
* @action: function to execute
* Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (action ==  NULL || array ==  NULL)
		return;
	while (size > 0)
	{
		action(*array);
		array++;
		size--;
	}
}

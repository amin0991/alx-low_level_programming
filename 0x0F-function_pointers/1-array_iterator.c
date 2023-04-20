#include "function_pointers.h"

/**
 *array_iterator - Executes a function given as
 *parameter o each elem of the array
 *@array: The array
 *@siz: The size of array
 *@action: A pointer to the function to be executed
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

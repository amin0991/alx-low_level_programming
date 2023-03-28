#include "main.h"

void swap_int(int *a, int *b)
{
	/**
	 * swap_int - swaps to integer values
	 * @a: first integer
	 * @b: second integer
	 * Return: void
	 */
	int x;

	x = *a;
	*a = *b;
	*b = x;
}

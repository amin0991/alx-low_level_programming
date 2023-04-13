#include "main.h"

/**
* _calloc - allocates memory for an array, initialized to 0
* @nmemb: number of elements
* @size: byte size of each element
*
* Return: void pointer to array space
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;

	if (!nmemb || !size)
		return (NULL);
	a = malloc(nmemb * size);
	if (!a)
		return (NULL);
	nmemb *= size;
	while (nmemb--)
		a[nmemb] = 0;
	return (a);
}

#include "main.h"

/**
* _strncpy - copies second string to first one
* swap_int - swaps to integer values
* @a: first integer
* @b: second integer
* Return: void
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}

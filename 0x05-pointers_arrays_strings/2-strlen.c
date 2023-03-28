#include "main.h"
/**
 * _strlen - function to calculate
 * @s charachter pointer array
 * Return: i the lenght of char
 */
int _strlen(char *s)
{
	int i;

	while(s[i])
		i++;
	return (i);
}

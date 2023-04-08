#include "main.h"
/**
 * _strlen_recursion - find length of a string
 * @s: string given
 * Return: positve integer (length of string)
 **/
int _strlen_recursion(char *s)
{
	return ((*s) == '\0') ? 0 : 1 +  _strlen_recursion(s + 1);
}

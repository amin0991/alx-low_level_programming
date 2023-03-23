#include "main.h"

/**
* _isalpha - check if char is alpha or not
* @c: character to check
*
* Return: 1 if is alphabet  0 if not
*/
int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 33 && c <= 126))
	return (1);
else
	return (0);
}

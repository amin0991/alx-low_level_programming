#include "main.h"

/**
* _islower - chack if the charachter is lower case
* @c: character to check
*
* Return: return 1 if lowercase alse return 1 if not
*/
int _islower(int c)
{
if (c >= 97 && c <= 122)
	return (1);
else
	return (0);
}

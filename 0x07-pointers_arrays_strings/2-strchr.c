#include "main.h"
/**
  _strchr - locate character in a string
 * @s: string given
 * @c: character to locate
 * Return: pointer to first occurrence of character | NULL if not found
 */
char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
	{
		if (*s == c)
			return (s);

	}
	if (c == '\0')
		return (s);
	return (0);
}

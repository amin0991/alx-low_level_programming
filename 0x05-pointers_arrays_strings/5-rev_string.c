#include "main.h"

/**
 * rev_string - reverses a gives string
 * @s: given string
 * Return: void
 */
void rev_string(char *s)
{
	int i, j;
	char rev[500];

	i = 0;
	while (s[i] != '\0')
		i++;
	i--;
	j = 0;
	while (i >= 0)
		rev[j++] = s[i--];

	while (j >= 0)
	{
		s[i] = rev[i];
		i++;
		j--;
	}

}

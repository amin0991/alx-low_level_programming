#include "main.h"

/**
 * puts_half - print second half of string
 * @str: given string
 * Return: void
 */
void puts_half(char *str)
{
	int i, j;

	i = 0, j = 0;
	do {
		i++;
		j += 2;
	} while (str[j - 1] != '\0' && str[j] != '\0');

	while (str[i] != '\0')
		_putchar(str[i++]);

	_putchar('\n');
}

#include "main.h"

/**
 * print_sign - checks for alpha characters
 * @n: character to check
 *
 * Return: + 1 > 0 if is alpha | 0 if not
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

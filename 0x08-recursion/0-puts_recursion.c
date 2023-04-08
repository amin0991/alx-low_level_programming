#include "main.h"
/**
 * _puts_recursion - print string to stdout
 * @s: string to be printed
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putch('\n');
		return;
	}
	_putchar((*s));
	_puts_recursion(s + 1);

}

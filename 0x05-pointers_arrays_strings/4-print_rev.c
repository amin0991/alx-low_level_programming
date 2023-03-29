#include "main.h"

/**
 * print_rev - print string in reverse
 * @s: string given
 * Return: void
 */
void print_rev(char *s)
{
int i;

i = _strlen(s);
while (i >= 0)
{
_putchar(s[i]);
i--;
}
}

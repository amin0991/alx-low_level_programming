#include <stdio.h>
#include <ctype.h>

/**
 * main - program that prints the alphabet in lowercase and UPPERCASE, followed by a new line
 * You can only use the putchar 3 TIMES
 * Return: 0
 */

int main(void)
{
int dig = 'a';
int dg = 'A';
while (dig <= 'z')
{
putchar(dig);
dig += 1;
}
while (dg <= 'Z')
{
putchar(dg);
dg += 1;
}
putchar('\n');
return (0);
}


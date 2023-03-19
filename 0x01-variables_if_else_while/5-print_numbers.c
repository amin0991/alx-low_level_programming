#include <stdio.h>
#include <ctype.h>

/**
 * main - program that prints only digits,
 * followed by a new line
 * Return: 0
 */

int main(void)
{
int dig = 0;
while (dig < 10)
{
printf("%d",dig);
dig += 1;
}
putchar('\n');
return (0);
}


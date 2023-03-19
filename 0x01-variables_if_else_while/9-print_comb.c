#include <stdio.h>
#include <ctype.h>

/**
* main - program that prints only 0123456789,
* followed by a new line
* You can only use the putchar
* Return: 0
*/

int main(void)
{
int i;
for (i = 0; i < 10; i++)
{
putchar(i + '0');
if (i < 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}

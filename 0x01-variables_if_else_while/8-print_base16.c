#include <stdio.h>

/**
* main - program that prints the lowercase alphabet in reverse.
* You can only use the putchar function
* Return: 0
*/

int main(void)
{
int i;
for (i = 0; i < 10; i++)
{
putchar(i + '0');
}
for (i = 0; i < 6; i++)
{
putchar(i + 'a');
}
putchar('\n');
return(0);
}

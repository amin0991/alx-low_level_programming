#include <stdio.h>
#include <ctype.h>

/**
* main - program that prints the alphabet in lowercase,
* execpt e and q
* You can only use the putchari
* Return: 0
*/

int main(void)
{
int dig = 'a';
while (dig <= 'z')
{
if (dig == 'q' || dig == 'e')
{
dig++;
}
putchar(dig);
dig += 1;
}

putchar('\n');
return (0);
}

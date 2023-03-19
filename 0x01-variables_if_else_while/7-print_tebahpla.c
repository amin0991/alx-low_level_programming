#include <stdio.h>
#include <ctype.h>

/**
* main - program that prints,
*zyxwvutsrqponmlkjihgfedcba
* followed by a new line
* You can only use the putchar
* Return: 0
*/

int main(void)
{
int dig = 'z';
while (dig >= 'a')
{

putchar(dig);
dig -= 1;
}

putchar('\n');
return (0);
}


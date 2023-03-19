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
int dig = '0';
while (dig == '0' || dig == '1' || dig == '2' || dig == '3' || dig == '4' || dig == '5' || dig == '6' || dig == '7' || dig == '8' || dig == '9')
{

putchar(dig);
dig += 1;
}

putchar('\n');
return (0);
}


#include "main.h"
/**
* jack_bauer - prints day of Jack Bauer
*
* Descriptio: print minute of the day
* Return: void
*/
void jack_bauer(void)
{
int m1, b, c, d, i;

m1 = 0;
while (m1 < 3)
{
b = 0;
if (m1 == 2)
i = 4;
else
i = 10;
while (b < i)
{
c = 0;
while (c < 6)
{
d = 0;
while (d < 10)
{
_putchar('0' + m1);
_putchar('0' + b);
_putchar(':');
_putchar('0' + c);
_putchar('0' + d);
_putchar('\n');
d++;
}
c++;
}
b++;
}
m1++;
}
}

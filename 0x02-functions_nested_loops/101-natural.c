#include "main.h"
/**
 * sum_multi - calculate the sum of 5 or 3 multiples under 1024
 *
 * Return: sum of all numbers
 */

int sum_multi(void)
{
int i = 0;
int n = 0;
while (i < 1024)
{
if (i % 3 == 0 || i % 5 == 0)
	n += i;
i++;
}

}
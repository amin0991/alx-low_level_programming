#include <stdio.h>

/**
 * main - is a function to calculate the 50 iterations
 *
 * Return: always return only 0
 */
int main(void)
{
	int f0, f1, i, fibo;
	f0 = 0;
	f1 = 1;
	i = 0;
	fibo = 0;
	while (i <= 56)
	{
		fibo = f0 + f1;
		f0 = f1;
		f1 = fibo;
		printf(", %d", fibo);
	}
	putchar('\n');
	return (0);


}

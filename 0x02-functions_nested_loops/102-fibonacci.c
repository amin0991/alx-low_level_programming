#include <stdio.h>

/**
 * main - is a function to calculate the 50 iterations
 *
 * Return: always return only 0
 */
int main(void)
{
	unsigned long f0, f1, fibo;
	int i = 0;

	f0 = 1;
	f1 = 2;
	i = 0;
	fibo = 0;
	printf("%lu, %lu", f0, f1);
	while (i <= 56)
	{
		fibo = f0 + f1;
		f0 = f1;
		f1 = fibo;
		printf(", %lu", fibo);
	}
	putchar('\n');
	return (0);


}

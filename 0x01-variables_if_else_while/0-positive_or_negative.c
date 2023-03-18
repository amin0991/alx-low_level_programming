#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 *
 * Description: checking if a random number is positive, negative or null
 * Return: always 0 (Success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 0)
	printf("%d is positive\n", n);
else if ( n < 0 )
	printf("%d is negative\n", n);
else if ( n == 0 )
	printf("%d is zero\n", n);
else
	printf("is not a number");
return (0);
}

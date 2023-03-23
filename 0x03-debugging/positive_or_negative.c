#include "main.h"
/**
 * positive_or_negative - entry point
 *
 * Description: checking if a random number is positive, negative or null
 * @i: integer as entry
 * Return: always 0 (Success)
 */
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is zero\n", i);

}

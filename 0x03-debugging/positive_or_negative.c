#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - main is the starting point
 *
 * Return: Returns value
 */

void positive_or_negative(int i)
{
	/* your code goes there */
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i <  0)
		printf("%d is negative\n", i);
	else
		printf("%d is zero\n", i);
	return (0);
}

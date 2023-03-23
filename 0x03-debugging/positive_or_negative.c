#include <stdio.h>

/* betty style doc for function main goes there */
/**
* positive_or_negative - single function is the starting point
* @i: our number to test 
*
* Return: void 
*/
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i <  0)
		printf("%d is negative\n", i);
	else
		printf("%d is zero\n", i);
}

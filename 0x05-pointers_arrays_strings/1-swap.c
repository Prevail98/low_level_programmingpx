#include "main.h"
#include <stdio.h>
/**
 * swap_int - The swapper swap two int
 *
 * @a: the parameter
 *
 * @b: the 2 parameter
 *
 * Return: it returns nothing
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;

}

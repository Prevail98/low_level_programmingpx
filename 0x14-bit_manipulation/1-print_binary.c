#include <stdio.h>
#include "main.h"

/**
 * print_binary - The function
 *
 * @n: the parameter
 *
 * Return : returns 0
 *
 */

void print_binary(unsigned long int n)
{

	unsigned long int mask = 1UL << ((sizeof(unsigned long int) * 8) - 1);

	int printed = 0;

	while (mask != 0)
	{
	if ((n & mask) != 0)
	{
	_putchar('1');
	printed = 1;
	}
	else if (printed)
	{
		_putchar('0');
	}
	mask >>= 1;
	}

	if (!printed)
	_putchar('0');
}


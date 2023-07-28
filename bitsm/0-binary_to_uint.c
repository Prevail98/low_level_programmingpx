#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - the function
 *
 * @b: a parameter
 *
 * Return: it returns 0 if b is null
 *
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	const char *ptr = b;

	if (b == NULL)
	{
	return (0);
	}

	while (*ptr != '\0')
	{
	if (*ptr != '0' && *ptr != '1')
		{
		return (0);
	}

	result = (result << 1) + (*ptr - '0');
	ptr++;
	}

	return (result);
}



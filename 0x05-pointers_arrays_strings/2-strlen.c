#include <stdio.h>

/**
 * _strlen - check the code
 *
 * @str: a parameter
 *
 * Return: Always 0.
 */

size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
		length++;
	return (length);
}

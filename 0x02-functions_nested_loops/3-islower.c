#include "main.h"

/**
 * _islower - function that prints alphabet
 *
 * @c: the parameter
 *
 * Return: return only 0 if condition not met
 */

int _islower(int c)
{

	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

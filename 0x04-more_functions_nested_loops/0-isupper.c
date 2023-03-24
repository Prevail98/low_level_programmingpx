#include "main.h"

/**
 * isupper - check if a character is a digit
 *
 * @x: the number to be checked
 *
 * Return: return 0
 */

	int _isupper(int x)
{
	if(x >= 65 && x <= 90)
	{
		return (1);
	}
	return (0);
}

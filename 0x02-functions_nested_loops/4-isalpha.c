#include "main.h"

/*
 * _isalpha - function that chacks for alphabets
 *
 * c: parameter to be checked
 *
 * Return: 1 if it is an alphabetd 0 othwise
 */

int isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (C >= 65 && <= 90))
		return (1);
	else
		return (0);

}

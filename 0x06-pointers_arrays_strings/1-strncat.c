#include "main.h"
#include <stdio.h>
/**
 * _strncat - funtion that terminates
 *
 * @dest: a parameter
 *
 * @src: the src parameter
 *
 * @n: parameter integer
 *
 * Return: the return value is dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int lendest = 0;
	int lensrc = 0;
	int i;

	for (i = 0; dest[i] != '\0'; i++)
		lendest++;
	for (i = 0; src[i] != '\0'; i++)
		lensrc++;
	for (i = 0; i < n; i++)
		dest[lendest + i] = src[i];
	return (dest);


}


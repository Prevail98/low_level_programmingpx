#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - a function that prints a name
 *
 * @name: an argument
 *
 * @f : an argument with a function that takes a pointer as argument
 * return: zero
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(*name);

	return (0);

}

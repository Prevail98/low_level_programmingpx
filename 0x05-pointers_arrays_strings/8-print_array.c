#include <stdio.h>
#include <main.h>

/**
 * print_array - check the code for
 *
 * @a: array of int
 *
 * @n: number of elements
 *
 * Return: Always 0.
 */

void print_array(int *a, int n);
{
	int j;

	for (j = 0; j < n; j++)
		printf("%d", a[j]);
	if (j != (n - 1))
		printf(", ");
	printf("\n")

}

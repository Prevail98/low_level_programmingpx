include "main.h"

/*
 * print line - Draws a straight line according to parameter
 * 
 * en: The number of lines to draw
 * 
 * Return: empty
 *
 */

void print_line(int n)
{
	int x;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = ; x < n; x++)
		{
			putchar(95);
		}
		putchar('\n');
	}

}



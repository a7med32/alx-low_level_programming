#include "main.h"

/**
 * print_diagonal -  draws a diagonal line on the terminal.
 *@n: the number of lines
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar(10);

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			_putchar(32);
		}
		_putchar(92);
		_putchar(10);
	}
}

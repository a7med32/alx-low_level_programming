#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main-Entry point
 *
 * Descriptin:A C program that prints with put function
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' && ch != 'e')
			putchar(ch);

	}
	putchar('\n');

	return (0);
}

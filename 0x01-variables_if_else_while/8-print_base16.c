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
	int x;
	char ch;

	for (x = 48; x <= 57; x++)
	{
		putchar (x);

	}
	for (ch ='a'; ch <= 'f'; ch++)
		putchar (ch);
	putchar('\n');

	return (0);
}

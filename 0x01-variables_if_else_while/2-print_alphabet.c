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

	ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)

		putchar (ch);
	putchar ("\n");


	return (0);
}


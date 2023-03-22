#include <stdlib.h>
#include "main.h"
#include <stdio.h>
#include <time.h>

/**
 * main-Entry point
 *
 * Descriptin:A C program that prints with put function
 *
 * Return: Always 0 (Success)
 */

int positive_or_negative(int n)
{
	

	/* your code goes there */
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{

		printf("%d is positive\n", n);
	}
	return (0);
}

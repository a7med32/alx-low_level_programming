#include <stdlib.h>
#include <stdio.h>
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
	int n;
	int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = n % 10;
	if (x == 0)
	{
		printf("Last digit of %d is 0 and is 0\n", n);
	}
	else if (x < 6 && x != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, x);
	}
	else
	{

		printf("Last digit of %d is %d and is greater than 5\n", n, x);
	}
	return (0);
}

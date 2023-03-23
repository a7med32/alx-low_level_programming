#include "main.h"
/**
 *_isupper- check if c is uppercase
 *
 *Description: 'the program's description'
 *
 * @c :the char
 *
 *Return: Always 0 (Success)
 **/

int _isdigit(int c)
{	int i;

	for (i = 48; i <= 57; i++)
	{
		if (c == i)
			return (1);
	}
	return (0);
}

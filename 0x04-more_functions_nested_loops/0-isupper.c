#include "main"
/**
 *_isupper- check if c is uppercase
 *
 *Description: 'the program's description'
 *
 * @c :the char
 *
 *Return: Always 0 (Success)
 **/

int _isupper(int c)
{
	for (i = 65; i <= 90; i++)
	{
		if (c == i)
			return (1);
	}
	return (0);
}

#include "main.h"

/**
 * _isalpha - "checks for alphabetic character"
 *
 * @c: checks for alphabetic character
 *
 * Return: Always (0)
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

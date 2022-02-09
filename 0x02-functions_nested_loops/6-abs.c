#include "main.h"

/**
 * _abs - "computes the absolute value of an integer"
 *
 * @c: checks for number character
 *
 * Return: Always (0)
 */

int _abs(int c)
{
	if (c < 0)
	{
		return (-1 * c);
	}
	return (c);
}

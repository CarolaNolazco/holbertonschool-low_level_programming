#include "main.h"

/**
 * print_line - "checks for lowercase character"
 *
 * @n: character to check
 *
 * Return: Always (0)
 */

void print_line(int n)
{
	int j;

	j = n + 1;

	for (n = 1 ; n < j ; n++)
	{
		_putchar('_');
		if (n <= 0)
		{
		}
	}
	_putchar('\n');
}
